from launch import LaunchDescription
from launch_ros.actions import Node


def CareLaunch():

    node = Node(
            output='screen',
            emulate_tty=True,
            package='toyota',
            executable='starter_motor',
            name='starter_motor'
        )

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/world/lidar_sensor/set_pose@ros_gz_interfaces/srv/SetEntityPose'],
        output='screen'
    )
    
    return LaunchDescription([
        node,
        bridge
    ])
