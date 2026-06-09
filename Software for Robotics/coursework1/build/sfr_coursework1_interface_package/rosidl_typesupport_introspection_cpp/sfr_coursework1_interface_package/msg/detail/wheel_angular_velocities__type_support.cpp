// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__functions.h"
#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sfr_coursework1_interface_package
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelAngularVelocities_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sfr_coursework1_interface_package::msg::WheelAngularVelocities(_init);
}

void WheelAngularVelocities_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sfr_coursework1_interface_package::msg::WheelAngularVelocities *>(message_memory);
  typed_message->~WheelAngularVelocities();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelAngularVelocities_message_member_array[2] = {
  {
    "right_wheel_angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package::msg::WheelAngularVelocities, right_wheel_angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_wheel_angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package::msg::WheelAngularVelocities, left_wheel_angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelAngularVelocities_message_members = {
  "sfr_coursework1_interface_package::msg",  // message namespace
  "WheelAngularVelocities",  // message name
  2,  // number of fields
  sizeof(sfr_coursework1_interface_package::msg::WheelAngularVelocities),
  false,  // has_any_key_member_
  WheelAngularVelocities_message_member_array,  // message members
  WheelAngularVelocities_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelAngularVelocities_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelAngularVelocities_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelAngularVelocities_message_members,
  get_message_typesupport_handle_function,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_hash,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description,
  &sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sfr_coursework1_interface_package


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sfr_coursework1_interface_package::msg::WheelAngularVelocities>()
{
  return &::sfr_coursework1_interface_package::msg::rosidl_typesupport_introspection_cpp::WheelAngularVelocities_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sfr_coursework1_interface_package, msg, WheelAngularVelocities)() {
  return &::sfr_coursework1_interface_package::msg::rosidl_typesupport_introspection_cpp::WheelAngularVelocities_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
