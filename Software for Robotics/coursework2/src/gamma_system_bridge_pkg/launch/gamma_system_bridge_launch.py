import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    this_package_share_directory = get_package_share_directory('gamma_system_bridge_pkg')

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        parameters=[{
            'config_file': os.path.join(this_package_share_directory, 'config_bridge', 'control_shape_thrust.yaml')
        }],
        output='screen'
    )
    
    return LaunchDescription([
        bridge
    ])
    
