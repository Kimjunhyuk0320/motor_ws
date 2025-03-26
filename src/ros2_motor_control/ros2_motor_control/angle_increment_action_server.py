import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse
from motor_control_interfaces.action import AngleControl
import can
import struct
import threading
import time

MAX_ROTATION = 360.0
MIN_ROTATION = -360.0

class MotorAngleActionServer(Node):
    def __init__(self):
        super().__init__('angle_increment_action_server')
        self.get_logger().info("Motor Angle Increment Action Server Initialized!!!")

        self.bus = can.Bus(interface='socketcan', channel='vcan0', bitrate=500000)
        self._action_server = ActionServer(
            self,
            AngleControl,
            'angle_control',
            execute_callback=None,
            goal_callback=self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback
        )

    def goal_callback(self, goal_request):
        self.get_logger().info(f"🎯 Goal Requested: ID={goal_request.motor_id}, Speed={goal_request.speed_dps} dps, Angle={goal_request.angle_deg}°")
        return GoalResponse.ACCEPT

    def handle_accepted_callback(self, goal_handle):
        threading.Thread(target=self.execute_callback, args=(goal_handle,), daemon=True).start()

    def execute_callback(self, goal_handle):
        motor_id = goal_handle.request.motor_id
        speed = goal_handle.request.speed_dps
        angle_deg = goal_handle.request.angle_deg

        if not (1 <= speed <= 4000):
            self.get_logger().error("❌ Invalid speed. Must be between 1 and 4000 dps.")
            goal_handle.abort()
            return AngleControl.Result(success=False, current_angle=0.0)

        initial_angle = self.request_current_angle(motor_id)
        if initial_angle is None:
            goal_handle.abort()
            return AngleControl.Result(success=False, current_angle=0.0)

        target_angle = initial_angle + angle_deg
        if not (MIN_ROTATION <= target_angle <= MAX_ROTATION):
            self.get_logger().error("❌ Movement exceeds ±360° limit.")
            goal_handle.abort()
            return AngleControl.Result(success=False, current_angle=initial_angle)

        self.send_can_command(motor_id, speed, angle_deg)

        start_time = time.time()
        duration = abs(angle_deg) / speed
        timeout = duration + 2.0

        while rclpy.ok():
            elapsed = time.time() - start_time
            remaining = max(0.0, abs(angle_deg) - (speed * elapsed))
            goal_handle.publish_feedback(AngleControl.Feedback(remaining=remaining))

            try:
                time_left = max(0.1, timeout - elapsed)
                msg = self.bus.recv(timeout=time_left)
                if msg and msg.arbitration_id == 0x240 + motor_id and msg.data[0] == 0xA8:
                    final_angle = self.request_current_angle(motor_id)
                    goal_handle.succeed()
                    return AngleControl.Result(success=True, current_angle=final_angle or 0.0)
            except can.CanError as e:
                self.get_logger().error(f"❌ CAN receive error: {e}")

            if elapsed > timeout:
                self.get_logger().warn("⏱️ Timeout waiting for CAN response.")
                goal_handle.abort()
                return AngleControl.Result(success=False, current_angle=self.request_current_angle(motor_id) or 0.0)

    def send_can_command(self, motor_id, speed, angle):
        speed_bytes = struct.pack('<H', speed)
        angle_lsb = int(angle / 0.01)
        angle_bytes = struct.pack('<I', angle_lsb)

        arbitration_id = 0x140 + motor_id
        data = [0xA8, 0x00] + list(speed_bytes) + list(angle_bytes)

        msg = can.Message(
            arbitration_id=arbitration_id,
            data=data,
            is_extended_id=False
        )

        try:
            self.bus.send(msg)
            self.get_logger().info(f"📤 Sent CAN command: ID=0x{arbitration_id:X}, Data={msg.data}")
        except can.CanError as e:
            self.get_logger().error(f"❌ Failed to send CAN message: {e}")

    def request_current_angle(self, motor_id):
        req_msg = can.Message(
            arbitration_id=0x140 + motor_id,
            data=[0x92] + [0x00] * 7,
            is_extended_id=False
        )
        try:
            self.bus.send(req_msg)
            msg = self.bus.recv(timeout=0.5)
            if msg and msg.arbitration_id == 0x240 + motor_id and msg.data[0] == 0x92:
                angle = struct.unpack('<i', bytes(msg.data[4:8]))[0] * 0.01
                return angle
        except can.CanError as e:
            self.get_logger().error(f"❌ Failed to request current angle: {e}")
        return None

    def destroy_node(self):
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = MotorAngleActionServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()