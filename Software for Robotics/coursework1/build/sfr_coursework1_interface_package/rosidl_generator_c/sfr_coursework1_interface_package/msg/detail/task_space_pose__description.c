// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sfr_coursework1_interface_package:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_type_hash_t *
sfr_coursework1_interface_package__msg__TaskSpacePose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x7c, 0xd9, 0x1b, 0x66, 0xc7, 0x59, 0x13,
      0xf0, 0x2d, 0x00, 0x61, 0xab, 0xd3, 0xd4, 0xb7,
      0x79, 0xb8, 0x46, 0xe0, 0x1c, 0xc2, 0x5b, 0x4f,
      0x17, 0x95, 0x09, 0x82, 0x4d, 0x3a, 0x47, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sfr_coursework1_interface_package__msg__TaskSpacePose__TYPE_NAME[] = "sfr_coursework1_interface_package/msg/TaskSpacePose";

// Define type names, field names, and default values
static char sfr_coursework1_interface_package__msg__TaskSpacePose__FIELD_NAME__x[] = "x";
static char sfr_coursework1_interface_package__msg__TaskSpacePose__FIELD_NAME__y[] = "y";
static char sfr_coursework1_interface_package__msg__TaskSpacePose__FIELD_NAME__phi_z[] = "phi_z";

static rosidl_runtime_c__type_description__Field sfr_coursework1_interface_package__msg__TaskSpacePose__FIELDS[] = {
  {
    {sfr_coursework1_interface_package__msg__TaskSpacePose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__msg__TaskSpacePose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__msg__TaskSpacePose__FIELD_NAME__phi_z, 5, 5},
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
sfr_coursework1_interface_package__msg__TaskSpacePose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sfr_coursework1_interface_package__msg__TaskSpacePose__TYPE_NAME, 51, 51},
      {sfr_coursework1_interface_package__msg__TaskSpacePose__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 phi_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sfr_coursework1_interface_package__msg__TaskSpacePose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sfr_coursework1_interface_package__msg__TaskSpacePose__TYPE_NAME, 51, 51},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfr_coursework1_interface_package__msg__TaskSpacePose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sfr_coursework1_interface_package__msg__TaskSpacePose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
