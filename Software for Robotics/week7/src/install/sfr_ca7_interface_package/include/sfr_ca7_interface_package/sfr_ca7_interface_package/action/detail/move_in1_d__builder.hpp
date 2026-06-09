// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sfr_ca7_interface_package:action/MoveIn1D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_ca7_interface_package/action/move_in1_d.hpp"


#ifndef SFR_CA7_INTERFACE_PACKAGE__ACTION__DETAIL__MOVE_IN1_D__BUILDER_HPP_
#define SFR_CA7_INTERFACE_PACKAGE__ACTION__DETAIL__MOVE_IN1_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sfr_ca7_interface_package/action/detail/move_in1_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_Goal_goal_value
{
public:
  Init_MoveIn1D_Goal_goal_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_Goal goal_value(::sfr_ca7_interface_package::action::MoveIn1D_Goal::_goal_value_type arg)
  {
    msg_.goal_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_Goal>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_Goal_goal_value();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_Result_end_value
{
public:
  Init_MoveIn1D_Result_end_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_Result end_value(::sfr_ca7_interface_package::action::MoveIn1D_Result::_end_value_type arg)
  {
    msg_.end_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_Result>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_Result_end_value();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_Feedback_current_value
{
public:
  Init_MoveIn1D_Feedback_current_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_Feedback current_value(::sfr_ca7_interface_package::action::MoveIn1D_Feedback::_current_value_type arg)
  {
    msg_.current_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_Feedback>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_Feedback_current_value();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_SendGoal_Request_goal
{
public:
  explicit Init_MoveIn1D_SendGoal_Request_goal(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Request goal(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Request msg_;
};

class Init_MoveIn1D_SendGoal_Request_goal_id
{
public:
  Init_MoveIn1D_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveIn1D_SendGoal_Request_goal goal_id(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveIn1D_SendGoal_Request_goal(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Request>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_SendGoal_Request_goal_id();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_SendGoal_Response_stamp
{
public:
  explicit Init_MoveIn1D_SendGoal_Response_stamp(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Response stamp(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Response msg_;
};

class Init_MoveIn1D_SendGoal_Response_accepted
{
public:
  Init_MoveIn1D_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveIn1D_SendGoal_Response_stamp accepted(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveIn1D_SendGoal_Response_stamp(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Response>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_SendGoal_Response_accepted();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_SendGoal_Event_response
{
public:
  explicit Init_MoveIn1D_SendGoal_Event_response(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event response(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event msg_;
};

class Init_MoveIn1D_SendGoal_Event_request
{
public:
  explicit Init_MoveIn1D_SendGoal_Event_request(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MoveIn1D_SendGoal_Event_response request(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveIn1D_SendGoal_Event_response(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event msg_;
};

class Init_MoveIn1D_SendGoal_Event_info
{
public:
  Init_MoveIn1D_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveIn1D_SendGoal_Event_request info(::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveIn1D_SendGoal_Event_request(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_SendGoal_Event>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_SendGoal_Event_info();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_GetResult_Request_goal_id
{
public:
  Init_MoveIn1D_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Request goal_id(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Request>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_GetResult_Request_goal_id();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_GetResult_Response_result
{
public:
  explicit Init_MoveIn1D_GetResult_Response_result(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Response result(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Response msg_;
};

class Init_MoveIn1D_GetResult_Response_status
{
public:
  Init_MoveIn1D_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveIn1D_GetResult_Response_result status(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveIn1D_GetResult_Response_result(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Response>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_GetResult_Response_status();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_GetResult_Event_response
{
public:
  explicit Init_MoveIn1D_GetResult_Event_response(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event response(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event msg_;
};

class Init_MoveIn1D_GetResult_Event_request
{
public:
  explicit Init_MoveIn1D_GetResult_Event_request(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MoveIn1D_GetResult_Event_response request(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveIn1D_GetResult_Event_response(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event msg_;
};

class Init_MoveIn1D_GetResult_Event_info
{
public:
  Init_MoveIn1D_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveIn1D_GetResult_Event_request info(::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveIn1D_GetResult_Event_request(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_GetResult_Event>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_GetResult_Event_info();
}

}  // namespace sfr_ca7_interface_package


namespace sfr_ca7_interface_package
{

namespace action
{

namespace builder
{

class Init_MoveIn1D_FeedbackMessage_feedback
{
public:
  explicit Init_MoveIn1D_FeedbackMessage_feedback(::sfr_ca7_interface_package::action::MoveIn1D_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sfr_ca7_interface_package::action::MoveIn1D_FeedbackMessage feedback(::sfr_ca7_interface_package::action::MoveIn1D_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_FeedbackMessage msg_;
};

class Init_MoveIn1D_FeedbackMessage_goal_id
{
public:
  Init_MoveIn1D_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveIn1D_FeedbackMessage_feedback goal_id(::sfr_ca7_interface_package::action::MoveIn1D_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveIn1D_FeedbackMessage_feedback(msg_);
  }

private:
  ::sfr_ca7_interface_package::action::MoveIn1D_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_ca7_interface_package::action::MoveIn1D_FeedbackMessage>()
{
  return sfr_ca7_interface_package::action::builder::Init_MoveIn1D_FeedbackMessage_goal_id();
}

}  // namespace sfr_ca7_interface_package

#endif  // SFR_CA7_INTERFACE_PACKAGE__ACTION__DETAIL__MOVE_IN1_D__BUILDER_HPP_
