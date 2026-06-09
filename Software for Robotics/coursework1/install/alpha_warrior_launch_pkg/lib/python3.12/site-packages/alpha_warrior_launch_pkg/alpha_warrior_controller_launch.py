from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([
        Node(
            package='alpha_warrior_controller_pkg',
            executable='alpha_warrior_controller_node',
            name='alpha_warrior_controller_node',
            output='screen'
        )
    ])
