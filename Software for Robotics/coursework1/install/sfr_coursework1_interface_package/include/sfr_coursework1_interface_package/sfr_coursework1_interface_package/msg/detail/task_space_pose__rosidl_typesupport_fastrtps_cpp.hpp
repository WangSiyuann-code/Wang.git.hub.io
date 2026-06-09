// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sfr_coursework1_interface_package:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sfr_coursework1_interface_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace sfr_coursework1_interface_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
cdr_serialize(
  const sfr_coursework1_interface_package::msg::TaskSpacePose & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework1_interface_package::msg::TaskSpacePose & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
get_serialized_size(
  const sfr_coursework1_interface_package::msg::TaskSpacePose & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
max_serialized_size_TaskSpacePose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
cdr_serialize_key(
  const sfr_coursework1_interface_package::msg::TaskSpacePose & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
get_serialized_size_key(
  const sfr_coursework1_interface_package::msg::TaskSpacePose & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
max_serialized_size_key_TaskSpacePose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sfr_coursework1_interface_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework1_interface_package, msg, TaskSpacePose)();

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
