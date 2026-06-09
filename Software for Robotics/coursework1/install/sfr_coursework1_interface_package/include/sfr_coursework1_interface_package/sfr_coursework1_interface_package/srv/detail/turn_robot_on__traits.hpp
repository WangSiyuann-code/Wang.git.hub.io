// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sfr_coursework1_interface_package:srv/TurnRobotOn.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/srv/turn_robot_on.hpp"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_ON__TRAITS_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_ON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sfr_coursework1_interface_package/srv/detail/turn_robot_on__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sfr_coursework1_interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnRobotOn_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnRobotOn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnRobotOn_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sfr_coursework1_interface_package

namespace rosidl_generator_traits
{

[[deprecated("use sfr_coursework1_interface_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sfr_coursework1_interface_package::srv::TurnRobotOn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sfr_coursework1_interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sfr_coursework1_interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const sfr_coursework1_interface_package::srv::TurnRobotOn_Request & msg)
{
  return sfr_coursework1_interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>()
{
  return "sfr_coursework1_interface_package::srv::TurnRobotOn_Request";
}

template<>
inline const char * name<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>()
{
  return "sfr_coursework1_interface_package/srv/TurnRobotOn_Request";
}

template<>
struct has_fixed_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sfr_coursework1_interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnRobotOn_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnRobotOn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnRobotOn_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sfr_coursework1_interface_package

namespace rosidl_generator_traits
{

[[deprecated("use sfr_coursework1_interface_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sfr_coursework1_interface_package::srv::TurnRobotOn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sfr_coursework1_interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sfr_coursework1_interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const sfr_coursework1_interface_package::srv::TurnRobotOn_Response & msg)
{
  return sfr_coursework1_interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>()
{
  return "sfr_coursework1_interface_package::srv::TurnRobotOn_Response";
}

template<>
inline const char * name<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>()
{
  return "sfr_coursework1_interface_package/srv/TurnRobotOn_Response";
}

template<>
struct has_fixed_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace sfr_coursework1_interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnRobotOn_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnRobotOn_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnRobotOn_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sfr_coursework1_interface_package

namespace rosidl_generator_traits
{

[[deprecated("use sfr_coursework1_interface_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sfr_coursework1_interface_package::srv::TurnRobotOn_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  sfr_coursework1_interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sfr_coursework1_interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const sfr_coursework1_interface_package::srv::TurnRobotOn_Event & msg)
{
  return sfr_coursework1_interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sfr_coursework1_interface_package::srv::TurnRobotOn_Event>()
{
  return "sfr_coursework1_interface_package::srv::TurnRobotOn_Event";
}

template<>
inline const char * name<sfr_coursework1_interface_package::srv::TurnRobotOn_Event>()
{
  return "sfr_coursework1_interface_package/srv/TurnRobotOn_Event";
}

template<>
struct has_fixed_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>::value && has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>::value> {};

template<>
struct is_message<sfr_coursework1_interface_package::srv::TurnRobotOn_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sfr_coursework1_interface_package::srv::TurnRobotOn>()
{
  return "sfr_coursework1_interface_package::srv::TurnRobotOn";
}

template<>
inline const char * name<sfr_coursework1_interface_package::srv::TurnRobotOn>()
{
  return "sfr_coursework1_interface_package/srv/TurnRobotOn";
}

template<>
struct has_fixed_size<sfr_coursework1_interface_package::srv::TurnRobotOn>
  : std::integral_constant<
    bool,
    has_fixed_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>::value &&
    has_fixed_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>::value
  >
{
};

template<>
struct has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn>
  : std::integral_constant<
    bool,
    has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>::value &&
    has_bounded_size<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>::value
  >
{
};

template<>
struct is_service<sfr_coursework1_interface_package::srv::TurnRobotOn>
  : std::true_type
{
};

template<>
struct is_service_request<sfr_coursework1_interface_package::srv::TurnRobotOn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sfr_coursework1_interface_package::srv::TurnRobotOn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_ON__TRAITS_HPP_
