// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_pkg:action/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PKG__ACTION__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
#define ACTION_PKG__ACTION__DETAIL__MOTOR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_pkg/action/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_Goal_rpm
{
public:
  explicit Init_MotorControl_Goal_rpm(::action_pkg::action::MotorControl_Goal & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::MotorControl_Goal rpm(::action_pkg::action::MotorControl_Goal::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_Goal msg_;
};

class Init_MotorControl_Goal_dir
{
public:
  Init_MotorControl_Goal_dir()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_Goal_rpm dir(::action_pkg::action::MotorControl_Goal::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_MotorControl_Goal_rpm(msg_);
  }

private:
  ::action_pkg::action::MotorControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_Goal>()
{
  return action_pkg::action::builder::Init_MotorControl_Goal_dir();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_Result_state
{
public:
  Init_MotorControl_Result_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::MotorControl_Result state(::action_pkg::action::MotorControl_Result::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_Result>()
{
  return action_pkg::action::builder::Init_MotorControl_Result_state();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_Feedback_rpm
{
public:
  explicit Init_MotorControl_Feedback_rpm(::action_pkg::action::MotorControl_Feedback & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::MotorControl_Feedback rpm(::action_pkg::action::MotorControl_Feedback::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_Feedback msg_;
};

class Init_MotorControl_Feedback_dir
{
public:
  Init_MotorControl_Feedback_dir()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_Feedback_rpm dir(::action_pkg::action::MotorControl_Feedback::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_MotorControl_Feedback_rpm(msg_);
  }

private:
  ::action_pkg::action::MotorControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_Feedback>()
{
  return action_pkg::action::builder::Init_MotorControl_Feedback_dir();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_SendGoal_Request_goal
{
public:
  explicit Init_MotorControl_SendGoal_Request_goal(::action_pkg::action::MotorControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::MotorControl_SendGoal_Request goal(::action_pkg::action::MotorControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_SendGoal_Request msg_;
};

class Init_MotorControl_SendGoal_Request_goal_id
{
public:
  Init_MotorControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_SendGoal_Request_goal goal_id(::action_pkg::action::MotorControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MotorControl_SendGoal_Request_goal(msg_);
  }

private:
  ::action_pkg::action::MotorControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_SendGoal_Request>()
{
  return action_pkg::action::builder::Init_MotorControl_SendGoal_Request_goal_id();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_SendGoal_Response_stamp
{
public:
  explicit Init_MotorControl_SendGoal_Response_stamp(::action_pkg::action::MotorControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::MotorControl_SendGoal_Response stamp(::action_pkg::action::MotorControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_SendGoal_Response msg_;
};

class Init_MotorControl_SendGoal_Response_accepted
{
public:
  Init_MotorControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_SendGoal_Response_stamp accepted(::action_pkg::action::MotorControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MotorControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_pkg::action::MotorControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_SendGoal_Response>()
{
  return action_pkg::action::builder::Init_MotorControl_SendGoal_Response_accepted();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_GetResult_Request_goal_id
{
public:
  Init_MotorControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::MotorControl_GetResult_Request goal_id(::action_pkg::action::MotorControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_GetResult_Request>()
{
  return action_pkg::action::builder::Init_MotorControl_GetResult_Request_goal_id();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_GetResult_Response_result
{
public:
  explicit Init_MotorControl_GetResult_Response_result(::action_pkg::action::MotorControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::MotorControl_GetResult_Response result(::action_pkg::action::MotorControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_GetResult_Response msg_;
};

class Init_MotorControl_GetResult_Response_status
{
public:
  Init_MotorControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_GetResult_Response_result status(::action_pkg::action::MotorControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MotorControl_GetResult_Response_result(msg_);
  }

private:
  ::action_pkg::action::MotorControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_GetResult_Response>()
{
  return action_pkg::action::builder::Init_MotorControl_GetResult_Response_status();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_MotorControl_FeedbackMessage_feedback
{
public:
  explicit Init_MotorControl_FeedbackMessage_feedback(::action_pkg::action::MotorControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::MotorControl_FeedbackMessage feedback(::action_pkg::action::MotorControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::MotorControl_FeedbackMessage msg_;
};

class Init_MotorControl_FeedbackMessage_goal_id
{
public:
  Init_MotorControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_FeedbackMessage_feedback goal_id(::action_pkg::action::MotorControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MotorControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_pkg::action::MotorControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::MotorControl_FeedbackMessage>()
{
  return action_pkg::action::builder::Init_MotorControl_FeedbackMessage_goal_id();
}

}  // namespace action_pkg

#endif  // ACTION_PKG__ACTION__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
