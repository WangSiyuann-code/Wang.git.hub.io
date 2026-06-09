// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sfr_coursework1_interface_package:srv/TurnRobotOff.idl
// generated code does not contain a copyright notice

#include "sfr_coursework1_interface_package/srv/detail/turn_robot_off__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_type_hash_t *
sfr_coursework1_interface_package__srv__TurnRobotOff__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x90, 0xf5, 0x83, 0xf9, 0xaf, 0xc3, 0x8c,
      0x42, 0x33, 0xf8, 0x56, 0x35, 0x47, 0xc5, 0xaa,
      0x5f, 0xf8, 0xe4, 0xf9, 0x13, 0xee, 0xdf, 0x5b,
      0x10, 0x0e, 0x12, 0x46, 0x81, 0x1c, 0xf5, 0x99,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_type_hash_t *
sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x32, 0xf2, 0xe6, 0xd7, 0x5f, 0x12, 0x51,
      0xdf, 0x9a, 0x95, 0xef, 0x7b, 0xf8, 0x19, 0x88,
      0x83, 0xbc, 0x9a, 0xcf, 0x3e, 0x03, 0x47, 0x44,
      0x00, 0xa8, 0xe0, 0xdc, 0x19, 0x47, 0x9a, 0x32,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_type_hash_t *
sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0xf2, 0x10, 0x1d, 0xd3, 0x71, 0x7c, 0x8a,
      0xce, 0xde, 0x90, 0xb4, 0x67, 0x7f, 0xf2, 0x0b,
      0x1a, 0x49, 0xd3, 0xbf, 0x9d, 0x35, 0xfd, 0xfc,
      0xa5, 0xd6, 0x3a, 0xb9, 0x8d, 0x1e, 0x97, 0x6e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_type_hash_t *
sfr_coursework1_interface_package__srv__TurnRobotOff_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0x0c, 0x75, 0xe4, 0xce, 0x0c, 0x16, 0x15,
      0xe2, 0xa8, 0xf3, 0xa8, 0xff, 0x29, 0x75, 0x1b,
      0x55, 0x2d, 0x3f, 0x36, 0xdc, 0x29, 0xa3, 0x43,
      0x8a, 0x05, 0xa7, 0x70, 0xfe, 0xd0, 0x1c, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char sfr_coursework1_interface_package__srv__TurnRobotOff__TYPE_NAME[] = "sfr_coursework1_interface_package/srv/TurnRobotOff";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Event__TYPE_NAME[] = "sfr_coursework1_interface_package/srv/TurnRobotOff_Event";
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Request__TYPE_NAME[] = "sfr_coursework1_interface_package/srv/TurnRobotOff_Request";
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Response__TYPE_NAME[] = "sfr_coursework1_interface_package/srv/TurnRobotOff_Response";

// Define type names, field names, and default values
static char sfr_coursework1_interface_package__srv__TurnRobotOff__FIELD_NAME__request_message[] = "request_message";
static char sfr_coursework1_interface_package__srv__TurnRobotOff__FIELD_NAME__response_message[] = "response_message";
static char sfr_coursework1_interface_package__srv__TurnRobotOff__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field sfr_coursework1_interface_package__srv__TurnRobotOff__FIELDS[] = {
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sfr_coursework1_interface_package__srv__TurnRobotOff__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sfr_coursework1_interface_package__srv__TurnRobotOff__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sfr_coursework1_interface_package__srv__TurnRobotOff__TYPE_NAME, 50, 50},
      {sfr_coursework1_interface_package__srv__TurnRobotOff__FIELDS, 3, 3},
    },
    {sfr_coursework1_interface_package__srv__TurnRobotOff__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = sfr_coursework1_interface_package__srv__TurnRobotOff_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field sfr_coursework1_interface_package__srv__TurnRobotOff_Request__FIELDS[] = {
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__TYPE_NAME, 58, 58},
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field sfr_coursework1_interface_package__srv__TurnRobotOff_Response__FIELDS[] = {
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__TYPE_NAME, 59, 59},
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELD_NAME__info[] = "info";
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELD_NAME__request[] = "request";
static char sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELDS[] = {
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sfr_coursework1_interface_package__srv__TurnRobotOff_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sfr_coursework1_interface_package__srv__TurnRobotOff_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__TYPE_NAME, 56, 56},
      {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__FIELDS, 3, 3},
    },
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sfr_coursework1_interface_package__srv__TurnRobotOff__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sfr_coursework1_interface_package__srv__TurnRobotOff__TYPE_NAME, 50, 50},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Request__TYPE_NAME, 58, 58},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Response__TYPE_NAME, 59, 59},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sfr_coursework1_interface_package__srv__TurnRobotOff_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sfr_coursework1_interface_package__srv__TurnRobotOff_Event__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfr_coursework1_interface_package__srv__TurnRobotOff__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sfr_coursework1_interface_package__srv__TurnRobotOff__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Event__get_individual_type_description_source(NULL);
    sources[4] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_individual_type_description_source(NULL);
    sources[5] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfr_coursework1_interface_package__srv__TurnRobotOff_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Request__get_individual_type_description_source(NULL);
    sources[4] = *sfr_coursework1_interface_package__srv__TurnRobotOff_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
