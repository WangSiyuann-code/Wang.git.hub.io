// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sfr_coursework1_interface_package:srv/TurnRobotOn.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__rosidl_typesupport_introspection_c.h"
#include "sfr_coursework1_interface_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__functions.h"
#include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__init(message_memory);
}

void sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_fini_function(void * message_memory)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package__srv__TurnRobotOn_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_members = {
  "sfr_coursework1_interface_package__srv",  // message namespace
  "TurnRobotOn_Request",  // message name
  1,  // number of fields
  sizeof(sfr_coursework1_interface_package__srv__TurnRobotOn_Request),
  false,  // has_any_key_member_
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_member_array,  // message members
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_type_support_handle = {
  0,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_members,
  get_message_typesupport_handle_function,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Request__get_type_hash,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Request__get_type_description,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Request)() {
  if (!sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_type_support_handle.typesupport_identifier) {
    sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sfr_coursework1_interface_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__functions.h"
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__init(message_memory);
}

void sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_fini_function(void * message_memory)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package__srv__TurnRobotOn_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_members = {
  "sfr_coursework1_interface_package__srv",  // message namespace
  "TurnRobotOn_Response",  // message name
  1,  // number of fields
  sizeof(sfr_coursework1_interface_package__srv__TurnRobotOn_Response),
  false,  // has_any_key_member_
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_member_array,  // message members
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_type_support_handle = {
  0,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_members,
  get_message_typesupport_handle_function,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Response__get_type_hash,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Response__get_type_description,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Response)() {
  if (!sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_type_support_handle.typesupport_identifier) {
    sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sfr_coursework1_interface_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__functions.h"
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "sfr_coursework1_interface_package/srv/turn_robot_on.h"
// Member `request`
// Member `response`
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__init(message_memory);
}

void sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_fini_function(void * message_memory)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__fini(message_memory);
}

size_t sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__size_function__TurnRobotOn_Event__request(
  const void * untyped_member)
{
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence * member =
    (const sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_const_function__TurnRobotOn_Event__request(
  const void * untyped_member, size_t index)
{
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence * member =
    (const sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_function__TurnRobotOn_Event__request(
  void * untyped_member, size_t index)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence * member =
    (sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__fetch_function__TurnRobotOn_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Request * item =
    ((const sfr_coursework1_interface_package__srv__TurnRobotOn_Request *)
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_const_function__TurnRobotOn_Event__request(untyped_member, index));
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request * value =
    (sfr_coursework1_interface_package__srv__TurnRobotOn_Request *)(untyped_value);
  *value = *item;
}

void sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__assign_function__TurnRobotOn_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request * item =
    ((sfr_coursework1_interface_package__srv__TurnRobotOn_Request *)
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_function__TurnRobotOn_Event__request(untyped_member, index));
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Request * value =
    (const sfr_coursework1_interface_package__srv__TurnRobotOn_Request *)(untyped_value);
  *item = *value;
}

bool sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__resize_function__TurnRobotOn_Event__request(
  void * untyped_member, size_t size)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence * member =
    (sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence *)(untyped_member);
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence__fini(member);
  return sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence__init(member, size);
}

size_t sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__size_function__TurnRobotOn_Event__response(
  const void * untyped_member)
{
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence * member =
    (const sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_const_function__TurnRobotOn_Event__response(
  const void * untyped_member, size_t index)
{
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence * member =
    (const sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_function__TurnRobotOn_Event__response(
  void * untyped_member, size_t index)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence * member =
    (sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__fetch_function__TurnRobotOn_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Response * item =
    ((const sfr_coursework1_interface_package__srv__TurnRobotOn_Response *)
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_const_function__TurnRobotOn_Event__response(untyped_member, index));
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response * value =
    (sfr_coursework1_interface_package__srv__TurnRobotOn_Response *)(untyped_value);
  *value = *item;
}

void sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__assign_function__TurnRobotOn_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response * item =
    ((sfr_coursework1_interface_package__srv__TurnRobotOn_Response *)
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_function__TurnRobotOn_Event__response(untyped_member, index));
  const sfr_coursework1_interface_package__srv__TurnRobotOn_Response * value =
    (const sfr_coursework1_interface_package__srv__TurnRobotOn_Response *)(untyped_value);
  *item = *value;
}

bool sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__resize_function__TurnRobotOn_Event__response(
  void * untyped_member, size_t size)
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence * member =
    (sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence *)(untyped_member);
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence__fini(member);
  return sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfr_coursework1_interface_package__srv__TurnRobotOn_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(sfr_coursework1_interface_package__srv__TurnRobotOn_Event, request),  // bytes offset in struct
    NULL,  // default value
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__size_function__TurnRobotOn_Event__request,  // size() function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_const_function__TurnRobotOn_Event__request,  // get_const(index) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_function__TurnRobotOn_Event__request,  // get(index) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__fetch_function__TurnRobotOn_Event__request,  // fetch(index, &value) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__assign_function__TurnRobotOn_Event__request,  // assign(index, value) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__resize_function__TurnRobotOn_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(sfr_coursework1_interface_package__srv__TurnRobotOn_Event, response),  // bytes offset in struct
    NULL,  // default value
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__size_function__TurnRobotOn_Event__response,  // size() function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_const_function__TurnRobotOn_Event__response,  // get_const(index) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__get_function__TurnRobotOn_Event__response,  // get(index) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__fetch_function__TurnRobotOn_Event__response,  // fetch(index, &value) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__assign_function__TurnRobotOn_Event__response,  // assign(index, value) function pointer
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__resize_function__TurnRobotOn_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_members = {
  "sfr_coursework1_interface_package__srv",  // message namespace
  "TurnRobotOn_Event",  // message name
  3,  // number of fields
  sizeof(sfr_coursework1_interface_package__srv__TurnRobotOn_Event),
  false,  // has_any_key_member_
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_member_array,  // message members
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_type_support_handle = {
  0,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_members,
  get_message_typesupport_handle_function,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Event__get_type_hash,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Event__get_type_description,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Event)() {
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Request)();
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Response)();
  if (!sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_type_support_handle.typesupport_identifier) {
    sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sfr_coursework1_interface_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_service_members = {
  "sfr_coursework1_interface_package__srv",  // service namespace
  "TurnRobotOn",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_type_support_handle,
  NULL,  // response message
  // sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_type_support_handle
  NULL  // event_message
  // sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_type_support_handle
};


static rosidl_service_type_support_t sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_service_type_support_handle = {
  0,
  &sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_service_members,
  get_service_typesupport_handle_function,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Request__rosidl_typesupport_introspection_c__TurnRobotOn_Request_message_type_support_handle,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Response__rosidl_typesupport_introspection_c__TurnRobotOn_Response_message_type_support_handle,
  &sfr_coursework1_interface_package__srv__TurnRobotOn_Event__rosidl_typesupport_introspection_c__TurnRobotOn_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sfr_coursework1_interface_package,
    srv,
    TurnRobotOn
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sfr_coursework1_interface_package,
    srv,
    TurnRobotOn
  ),
  &sfr_coursework1_interface_package__srv__TurnRobotOn__get_type_hash,
  &sfr_coursework1_interface_package__srv__TurnRobotOn__get_type_description,
  &sfr_coursework1_interface_package__srv__TurnRobotOn__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sfr_coursework1_interface_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn)(void) {
  if (!sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_service_type_support_handle.typesupport_identifier) {
    sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfr_coursework1_interface_package, srv, TurnRobotOn_Event)()->data;
  }

  return &sfr_coursework1_interface_package__srv__detail__turn_robot_on__rosidl_typesupport_introspection_c__TurnRobotOn_service_type_support_handle;
}
