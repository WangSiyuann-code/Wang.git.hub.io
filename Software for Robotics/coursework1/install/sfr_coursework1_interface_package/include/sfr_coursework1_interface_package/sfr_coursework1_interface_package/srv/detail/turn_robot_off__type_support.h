// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from sfr_coursework1_interface_package:srv/TurnRobotOff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/srv/turn_robot_off.h"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_OFF__TYPE_SUPPORT_H_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_OFF__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "sfr_coursework1_interface_package/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  sfr_coursework1_interface_package,
  srv,
  TurnRobotOff_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  sfr_coursework1_interface_package,
  srv,
  TurnRobotOff_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  sfr_coursework1_interface_package,
  srv,
  TurnRobotOff_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  sfr_coursework1_interface_package,
  srv,
  TurnRobotOff
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  sfr_coursework1_interface_package,
  srv,
  TurnRobotOff
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  sfr_coursework1_interface_package,
  srv,
  TurnRobotOff
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_OFF__TYPE_SUPPORT_H_
