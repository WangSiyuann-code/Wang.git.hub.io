// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sfr_coursework1_interface_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__struct.h"
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WheelAngularVelocities__ros_msg_type = sfr_coursework1_interface_package__msg__WheelAngularVelocities;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfr_coursework1_interface_package
bool cdr_serialize_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
  const sfr_coursework1_interface_package__msg__WheelAngularVelocities * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: right_wheel_angular_velocity
  {
    cdr << ros_message->right_wheel_angular_velocity;
  }

  // Field name: left_wheel_angular_velocity
  {
    cdr << ros_message->left_wheel_angular_velocity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfr_coursework1_interface_package
bool cdr_deserialize_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
  eprosima::fastcdr::Cdr & cdr,
  sfr_coursework1_interface_package__msg__WheelAngularVelocities * ros_message)
{
  // Field name: right_wheel_angular_velocity
  {
    cdr >> ros_message->right_wheel_angular_velocity;
  }

  // Field name: left_wheel_angular_velocity
  {
    cdr >> ros_message->left_wheel_angular_velocity;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfr_coursework1_interface_package
size_t get_serialized_size_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelAngularVelocities__ros_msg_type * ros_message = static_cast<const _WheelAngularVelocities__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: right_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message->right_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message->left_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfr_coursework1_interface_package
size_t max_serialized_size_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
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

  // Field name: right_wheel_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: left_wheel_angular_velocity
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
    using DataType = sfr_coursework1_interface_package__msg__WheelAngularVelocities;
    is_plain =
      (
      offsetof(DataType, left_wheel_angular_velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfr_coursework1_interface_package
bool cdr_serialize_key_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
  const sfr_coursework1_interface_package__msg__WheelAngularVelocities * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: right_wheel_angular_velocity
  {
    cdr << ros_message->right_wheel_angular_velocity;
  }

  // Field name: left_wheel_angular_velocity
  {
    cdr << ros_message->left_wheel_angular_velocity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfr_coursework1_interface_package
size_t get_serialized_size_key_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelAngularVelocities__ros_msg_type * ros_message = static_cast<const _WheelAngularVelocities__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: right_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message->right_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_wheel_angular_velocity
  {
    size_t item_size = sizeof(ros_message->left_wheel_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfr_coursework1_interface_package
size_t max_serialized_size_key_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
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
  // Field name: right_wheel_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: left_wheel_angular_velocity
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
    using DataType = sfr_coursework1_interface_package__msg__WheelAngularVelocities;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const sfr_coursework1_interface_package__msg__WheelAngularVelocities * ros_message = static_cast<const sfr_coursework1_interface_package__msg__WheelAngularVelocities *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_sfr_coursework1_interface_package__msg__WheelAngularVelocities(ros_message, cdr);
}

static bool _WheelAngularVelocities__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  sfr_coursework1_interface_package__msg__WheelAngularVelocities * ros_message = static_cast<sfr_coursework1_interface_package__msg__WheelAngularVelocities *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_sfr_coursework1_interface_package__msg__WheelAngularVelocities(cdr, ros_message);
}

static uint32_t _WheelAngularVelocities__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
      untyped_ros_message, 0));
}

static size_t _WheelAngularVelocities__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sfr_coursework1_interface_package__msg__WheelAngularVelocities(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WheelAngularVelocities = {
  "sfr_coursework1_interface_package::msg",
  "WheelAngularVelocities",
  _WheelAngularVelocities__cdr_serialize,
  _WheelAngularVelocities__cdr_deserialize,
  _WheelAngularVelocities__get_serialized_size,
  _WheelAngularVelocities__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WheelAngularVelocities__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WheelAngularVelocities,
  get_message_typesupport_handle_function,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_hash,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sfr_coursework1_interface_package, msg, WheelAngularVelocities)() {
  return &_WheelAngularVelocities__type_support;
}

#if defined(__cplusplus)
}
#endif
