// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/wheel_angular_velocities.hpp"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__TRAITS_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sfr_coursework1_interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelAngularVelocities & msg,
  std::ostream & out)
{
  out << "{";
  // member: right_wheel_angular_velocity
  {
    out << "right_wheel_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_angular_velocity, out);
    out << ", ";
  }

  // member: left_wheel_angular_velocity
  {
    out << "left_wheel_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelAngularVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_wheel_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_angular_velocity, out);
    out << "\n";
  }

  // member: left_wheel_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelAngularVelocities & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sfr_coursework1_interface_package

namespace rosidl_generator_traits
{

[[deprecated("use sfr_coursework1_interface_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sfr_coursework1_interface_package::msg::WheelAngularVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  sfr_coursework1_interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sfr_coursework1_interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const sfr_coursework1_interface_package::msg::WheelAngularVelocities & msg)
{
  return sfr_coursework1_interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sfr_coursework1_interface_package::msg::WheelAngularVelocities>()
{
  return "sfr_coursework1_interface_package::msg::WheelAngularVelocities";
}

template<>
inline const char * name<sfr_coursework1_interface_package::msg::WheelAngularVelocities>()
{
  return "sfr_coursework1_interface_package/msg/WheelAngularVelocities";
}

template<>
struct has_fixed_size<sfr_coursework1_interface_package::msg::WheelAngularVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sfr_coursework1_interface_package::msg::WheelAngularVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sfr_coursework1_interface_package::msg::WheelAngularVelocities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__TRAITS_HPP_
