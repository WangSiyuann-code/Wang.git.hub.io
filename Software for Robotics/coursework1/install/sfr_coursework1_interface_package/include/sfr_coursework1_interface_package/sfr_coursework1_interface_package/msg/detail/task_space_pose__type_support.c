// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sfr_coursework1_interface_package:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__rosidl_typesupport_introspection_c.h"
#include "sfr_coursework1_interface_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__functions.h"
#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sfr_coursework1_interface_package__msg__TaskSpacePose__init(message_memory);
}

void sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_fini_function(void * message_memory)
{
  sfr_coursework1_interface_package__msg__TaskSpacePose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package__msg__TaskSpacePose, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package__msg__TaskSpacePose, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phi_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package__msg__TaskSpacePose, phi_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_members = {
  "sfr_coursework1_interface_package__msg",  // message namespace
  "TaskSpacePose",  // message name
  3,  // number of fields
  sizeof(sfr_coursework1_interface_package__msg__TaskSpacePose),
  false,  // has_any_key_member_
  sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_member_array,  // message members
  sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_init_function,  // function to initialize message memory (memory has to be allocated)
  sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle = {
  0,
  &sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_members,
  get_message_typesupport_handle_function,
  &sfr_coursework1_interface_package__msg__TaskSpacePose__get_type_hash,
  &sfr_coursework1_interface_package__msg__TaskSpacePose__get_type_description,
  &sfr_coursework1_interface_package__msg__TaskSpacePose__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, msg, TaskSpacePose)() {
  if (!sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle.typesupport_identifier) {
    sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sfr_coursework1_interface_package__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
