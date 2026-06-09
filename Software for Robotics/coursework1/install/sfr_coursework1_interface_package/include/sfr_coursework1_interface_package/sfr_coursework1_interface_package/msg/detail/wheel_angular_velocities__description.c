// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice

#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_type_hash_t *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x3e, 0x82, 0x87, 0x29, 0x95, 0x96, 0xda,
      0x7a, 0xa0, 0xbb, 0x2c, 0x31, 0x19, 0xe7, 0xcb,
      0x50, 0x90, 0x78, 0xc7, 0x50, 0xa7, 0x18, 0x5f,
      0x4d, 0x94, 0x9b, 0x14, 0x95, 0x89, 0x40, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sfr_coursework1_interface_package__msg__WheelAngularVelocities__TYPE_NAME[] = "sfr_coursework1_interface_package/msg/WheelAngularVelocities";

// Define type names, field names, and default values
static char sfr_coursework1_interface_package__msg__WheelAngularVelocities__FIELD_NAME__right_wheel_angular_velocity[] = "right_wheel_angular_velocity";
static char sfr_coursework1_interface_package__msg__WheelAngularVelocities__FIELD_NAME__left_wheel_angular_velocity[] = "left_wheel_angular_velocity";

static rosidl_runtime_c__type_description__Field sfr_coursework1_interface_package__msg__WheelAngularVelocities__FIELDS[] = {
  {
    {sfr_coursework1_interface_package__msg__WheelAngularVelocities__FIELD_NAME__right_wheel_angular_velocity, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__msg__WheelAngularVelocities__FIELD_NAME__left_wheel_angular_velocity, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sfr_coursework1_interface_package__msg__WheelAngularVelocities__TYPE_NAME, 60, 60},
      {sfr_coursework1_interface_package__msg__WheelAngularVelocities__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 right_wheel_angular_velocity\n"
  "float64 left_wheel_angular_velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sfr_coursework1_interface_package__msg__WheelAngularVelocities__TYPE_NAME, 60, 60},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 73, 73},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
