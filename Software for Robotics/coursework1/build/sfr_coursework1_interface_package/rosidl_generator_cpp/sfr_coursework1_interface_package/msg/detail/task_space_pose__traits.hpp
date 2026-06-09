// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sfr_coursework1_interface_package:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/task_space_pose.hpp"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__TRAITS_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sfr_coursework1_interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskSpacePose & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: phi_z
  {
    out << "phi_z: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskSpacePose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: phi_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_z: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskSpacePose & msg, bool use_flow_style = false)
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
  const sfr_coursework1_interface_package::msg::TaskSpacePose & msg,
  std::ostream & out, size_t indentation = 0)
{
  sfr_coursework1_interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sfr_coursework1_interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const sfr_coursework1_interface_package::msg::TaskSpacePose & msg)
{
  return sfr_coursework1_interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sfr_coursework1_interface_package::msg::TaskSpacePose>()
{
  return "sfr_coursework1_interface_package::msg::TaskSpacePose";
}

template<>
inline const char * name<sfr_coursework1_interface_package::msg::TaskSpacePose>()
{
  return "sfr_coursework1_interface_package/msg/TaskSpacePose";
}

template<>
struct has_fixed_size<sfr_coursework1_interface_package::msg::TaskSpacePose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sfr_coursework1_interface_package::msg::TaskSpacePose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sfr_coursework1_interface_package::msg::TaskSpacePose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__TRAITS_HPP_
