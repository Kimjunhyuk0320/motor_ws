from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros2_motor_control',
            executable='motor_control_node',
            name='motor_control',
            output='screen'
        )
    ])
