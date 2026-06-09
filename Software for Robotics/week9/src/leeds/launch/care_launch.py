from launch import LaunchDescription
from launch_ros.actions import Node


def CareLaunch():

    bridge1 = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/world/lidar_sensor/light_config@ros_gz_interfaces/msg/Light@gz.msgs.Light'],
        output='screen'
    )
    
    bridge2 = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/gui/camera/pose@geometry_msgs/msg/Transform[gz.msgs.Pose'],
        output='screen'
    )
    
    bridge3 = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/depth_camera@sensor_msgs/msg/Image[gz.msgs.Image'],
        output='screen'
    )
    
    return LaunchDescription([
        #node,
        bridge1,
        bridge2,
        bridge3
    ])
