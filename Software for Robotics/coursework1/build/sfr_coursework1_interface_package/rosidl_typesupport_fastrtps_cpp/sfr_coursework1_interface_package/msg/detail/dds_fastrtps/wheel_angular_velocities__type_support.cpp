// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__functions.h"
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sfr_coursework1_interface_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
cdr_serialize(
  const sfr_coursework1_interface_package::msg::WheelAngularVelocities & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_wheel_angular_velocity
  cdr << ros_message.right_wheel_angular_velocity;

  // Member: left_wheel_angular_velocity
  cdr << ros_message.left_wheel_angular_velocity;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework1_interface_package::msg::WheelAngularVelocities & ros_message)
{
  // Member: right_wheel_angular_velocity
  cdr >> ros_message.right_wheel_angular_velocity;

  // Member: left_wheel_angular_velocity
  cdr >> ros_message.left_wheel_angular_velocity;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
get_serialized_size(
  const sfr_coursework1_interface_package::msg::WheelAngularVelocities & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message.right_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message.left_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
max_serialized_size_WheelAngularVelocities(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: right_wheel_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: left_wheel_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sfr_coursework1_interface_package::msg::WheelAngularVelocities;
    is_plain =
      (
      offsetof(DataType, left_wheel_angular_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
cdr_serialize_key(
  const sfr_coursework1_interface_package::msg::WheelAngularVelocities & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_wheel_angular_velocity
  cdr << ros_message.right_wheel_angular_velocity;

  // Member: left_wheel_angular_velocity
  cdr << ros_message.left_wheel_angular_velocity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
get_serialized_size_key(
  const sfr_coursework1_interface_package::msg::WheelAngularVelocities & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message.right_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message.left_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sfr_coursework1_interface_package
max_serialized_size_key_WheelAngularVelocities(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: right_wheel_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_wheel_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sfr_coursework1_interface_package::msg::WheelAngularVelocities;
    is_plain =
      (
      offsetof(DataType, left_wheel_angular_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _WheelAngularVelocities__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sfr_coursework1_interface_package::msg::WheelAngularVelocities *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WheelAngularVelocities__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sfr_coursework1_interface_package::msg::WheelAngularVelocities *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WheelAngularVelocities__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sfr_coursework1_interface_package::msg::WheelAngularVelocities *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WheelAngularVelocities__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WheelAngularVelocities(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WheelAngularVelocities__callbacks = {
  "sfr_coursework1_interface_package::msg",
  "WheelAngularVelocities",
  _WheelAngularVelocities__cdr_serialize,
  _WheelAngularVelocities__cdr_deserialize,
  _WheelAngularVelocities__get_serialized_size,
  _WheelAngularVelocities__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WheelAngularVelocities__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WheelAngularVelocities__callbacks,
  get_message_typesupport_handle_function,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_hash,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sfr_coursework1_interface_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework1_interface_package::msg::WheelAngularVelocities>()
{
  return &sfr_coursework1_interface_package::msg::typesupport_fastrtps_cpp::_WheelAngularVelocities__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sfr_coursework1_interface_package, msg, WheelAngularVelocities)() {
  return &sfr_coursework1_interface_package::msg::typesupport_fastrtps_cpp::_WheelAngularVelocities__handle;
}

#ifdef __cplusplus
}
#endif
