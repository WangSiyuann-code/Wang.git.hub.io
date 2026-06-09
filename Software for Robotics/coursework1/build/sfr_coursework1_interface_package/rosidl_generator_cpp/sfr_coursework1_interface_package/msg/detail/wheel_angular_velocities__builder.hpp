// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/wheel_angular_velocities.hpp"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__BUILDER_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sfr_coursework1_interface_package
{

namespace msg
{

namespace builder
{

class Init_WheelAngularVelocities_left_wheel_angular_velocity
{
public:
  explicit Init_WheelAngularVelocities_left_wheel_angular_velocity(::sfr_coursework1_interface_package::msg::WheelAngularVelocities & msg)
  : msg_(msg)
  {}
  ::sfr_coursework1_interface_package::msg::WheelAngularVelocities left_wheel_angular_velocity(::sfr_coursework1_interface_package::msg::WheelAngularVelocities::_left_wheel_angular_velocity_type arg)
  {
    msg_.left_wheel_angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework1_interface_package::msg::WheelAngularVelocities msg_;
};

class Init_WheelAngularVelocities_right_wheel_angular_velocity
{
public:
  Init_WheelAngularVelocities_right_wheel_angular_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelAngularVelocities_left_wheel_angular_velocity right_wheel_angular_velocity(::sfr_coursework1_interface_package::msg::WheelAngularVelocities::_right_wheel_angular_velocity_type arg)
  {
    msg_.right_wheel_angular_velocity = std::move(arg);
    return Init_WheelAngularVelocities_left_wheel_angular_velocity(msg_);
  }

private:
  ::sfr_coursework1_interface_package::msg::WheelAngularVelocities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework1_interface_package::msg::WheelAngularVelocities>()
{
  return sfr_coursework1_interface_package::msg::builder::Init_WheelAngularVelocities_right_wheel_angular_velocity();
}

}  // namespace sfr_coursework1_interface_package

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__BUILDER_HPP_
