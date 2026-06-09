from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([
        Node(
            package='alpha_warrior_pkg',
            executable='alpha_warrior_node',
            name='alpha_warrior_node',
            namespace='alpha_warrior',
            output='screen'
        )
    ])
