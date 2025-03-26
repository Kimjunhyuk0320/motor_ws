import rclpy
from rclpy.node import Node
import can  # python-can 라이브러리 사용
import struct  # 리틀 엔디안 변환을 위한 모듈
import threading  # CAN 메시지 수신을 위한 별도 스레드 실행

class MotorControlNode(Node):
    def __init__(self):
        """
        ROS 2 노드 초기화 및 CAN 인터페이스 설정
        """
        super().__init__('motor_control_node')
        self.get_logger().info("🚀 MotorControlNode Initialized!")

        # CAN 인터페이스 설정 (가상 CAN vcan0 사용)
        self.bus = can.Bus(interface='socketcan', channel='vcan0', bitrate=500000)

        # CAN 메시지 수신을 위한 스레드 시작
        self.running = True
        self.receive_thread = threading.Thread(target=self.receive_can_response, daemon=True)
        self.receive_thread.start()

        # 예제: 속도 500dps, 180도 증분 회전 명령 실행
        self.send_can_command(speed=500, angle=180)

    def send_can_command(self, speed: int, angle: int):
        """
        속도와 각도를 입력받아 CAN 메시지를 생성하고 전송하는 함수

        :param speed: 속도 제한 값 (dps 단위, 1 LSB = 1dps)
        :param angle: 이동할 각도 (0.01°/LSB 기준)
        """
        # 속도 변환 (16비트 리틀 엔디안)
        speed_bytes = struct.pack('<H', speed)  # 2바이트 (Little Endian)
        
        # 입력 각도 0.01°/LSB 기준이므로 변환 필요
        angle_value = int(angle / 0.01)  # 0.01°/LSB 변환
        angle_bytes = struct.pack('<I', angle_value)  # 4바이트 (unsigned int, Little Endian)

        # CAN 메시지 생성 (증분 위치 폐루프 제어, 0xA8)
        msg = can.Message(
            arbitration_id=0x141,  # CAN ID
            data=[0xA8, 0x00] + list(speed_bytes) + list(angle_bytes),  # 8바이트 데이터
            is_extended_id=False  # 표준 CAN ID 사용
        )

        try:
            self.bus.send(msg)  # 메시지 전송
            self.get_logger().info(f"✅ CAN 메시지 전송 완료: ID={hex(msg.arbitration_id)}, Data={msg.data}")
        except can.CanError as e:
            self.get_logger().error(f"❌ CAN 메시지 전송 실패: {e}")

    def receive_can_response(self):
        """
        CAN 메시지를 지속적으로 수신하여 응답 데이터를 출력하는 함수
        """
        while self.running:
            try:
                msg = self.bus.recv(timeout=1.0)  # 1초 동안 수신 대기
                if msg:
                    self.get_logger().info(f"📩 CAN 응답 수신: ID={hex(msg.arbitration_id)}, Data={msg.data}")

                    # ID가 0x241 (응답 메시지)인 경우 데이터 해석
                    if msg.arbitration_id == 0x241:
                        self.parse_can_response(msg.data)

            except can.CanError as e:
                self.get_logger().error(f"❌ CAN 응답 수신 오류: {e}")

    def parse_can_response(self, data):
        """
        CAN 응답 데이터를 해석하는 함수

        :param data: 수신된 CAN 데이터 (8바이트)
        """
        if len(data) < 8:
            self.get_logger().error("❌ 응답 데이터가 부족함")
            return

        response_code = data[0]
        
        if response_code == 0xA8:  # 증분 위치 폐루프 응답
            temperature = data[1]  # 모터 온도 (1°C/LSB)
            iq = struct.unpack('<h', bytes(data[2:4]))[0] * 0.01  # 토크 전류 (0.01A/LSB)
            speed = struct.unpack('<h', bytes(data[4:6]))[0]  # 출력 속도 (1dps/LSB)
            position = struct.unpack('<h', bytes(data[6:8]))[0]  # 출력 각도 int16_t로 받음 1°/LSB 기준

            self.get_logger().info(f"📊 응답 데이터 해석: 🌡️ 온도={temperature}°C, 🔄 토크 전류={iq}A, ⚡ 속도={speed} dps, 📍 위치={position}°")

    def destroy_node(self):
        """
        노드 종료 시 실행, CAN 수신 스레드 종료
        """
        self.running = False
        self.receive_thread.join()
        super().destroy_node()

def main(args=None):
    """
    ROS 2 노드 실행을 위한 main 함수
    """
    rclpy.init(args=args)
    node = MotorControlNode()
    rclpy.spin(node)  # ROS 2 노드 실행
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
