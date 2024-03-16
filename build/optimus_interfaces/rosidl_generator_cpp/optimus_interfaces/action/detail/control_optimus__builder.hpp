// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from optimus_interfaces:action/ControlOptimus.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__BUILDER_HPP_
#define OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_Goal_is_recording
{
public:
  explicit Init_ControlOptimus_Goal_is_recording(::optimus_interfaces::action::ControlOptimus_Goal & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::action::ControlOptimus_Goal is_recording(::optimus_interfaces::action::ControlOptimus_Goal::_is_recording_type arg)
  {
    msg_.is_recording = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Goal msg_;
};

class Init_ControlOptimus_Goal_is_autonomous
{
public:
  explicit Init_ControlOptimus_Goal_is_autonomous(::optimus_interfaces::action::ControlOptimus_Goal & msg)
  : msg_(msg)
  {}
  Init_ControlOptimus_Goal_is_recording is_autonomous(::optimus_interfaces::action::ControlOptimus_Goal::_is_autonomous_type arg)
  {
    msg_.is_autonomous = std::move(arg);
    return Init_ControlOptimus_Goal_is_recording(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Goal msg_;
};

class Init_ControlOptimus_Goal_right_motor_2
{
public:
  explicit Init_ControlOptimus_Goal_right_motor_2(::optimus_interfaces::action::ControlOptimus_Goal & msg)
  : msg_(msg)
  {}
  Init_ControlOptimus_Goal_is_autonomous right_motor_2(::optimus_interfaces::action::ControlOptimus_Goal::_right_motor_2_type arg)
  {
    msg_.right_motor_2 = std::move(arg);
    return Init_ControlOptimus_Goal_is_autonomous(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Goal msg_;
};

class Init_ControlOptimus_Goal_right_motor_1
{
public:
  explicit Init_ControlOptimus_Goal_right_motor_1(::optimus_interfaces::action::ControlOptimus_Goal & msg)
  : msg_(msg)
  {}
  Init_ControlOptimus_Goal_right_motor_2 right_motor_1(::optimus_interfaces::action::ControlOptimus_Goal::_right_motor_1_type arg)
  {
    msg_.right_motor_1 = std::move(arg);
    return Init_ControlOptimus_Goal_right_motor_2(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Goal msg_;
};

class Init_ControlOptimus_Goal_left_motor_2
{
public:
  explicit Init_ControlOptimus_Goal_left_motor_2(::optimus_interfaces::action::ControlOptimus_Goal & msg)
  : msg_(msg)
  {}
  Init_ControlOptimus_Goal_right_motor_1 left_motor_2(::optimus_interfaces::action::ControlOptimus_Goal::_left_motor_2_type arg)
  {
    msg_.left_motor_2 = std::move(arg);
    return Init_ControlOptimus_Goal_right_motor_1(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Goal msg_;
};

class Init_ControlOptimus_Goal_left_motor_1
{
public:
  Init_ControlOptimus_Goal_left_motor_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlOptimus_Goal_left_motor_2 left_motor_1(::optimus_interfaces::action::ControlOptimus_Goal::_left_motor_1_type arg)
  {
    msg_.left_motor_1 = std::move(arg);
    return Init_ControlOptimus_Goal_left_motor_2(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_Goal>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_Goal_left_motor_1();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_Result_is_autonomous
{
public:
  explicit Init_ControlOptimus_Result_is_autonomous(::optimus_interfaces::action::ControlOptimus_Result & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::action::ControlOptimus_Result is_autonomous(::optimus_interfaces::action::ControlOptimus_Result::_is_autonomous_type arg)
  {
    msg_.is_autonomous = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Result msg_;
};

class Init_ControlOptimus_Result_message
{
public:
  Init_ControlOptimus_Result_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlOptimus_Result_is_autonomous message(::optimus_interfaces::action::ControlOptimus_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ControlOptimus_Result_is_autonomous(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_Result>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_Result_message();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_Feedback_message
{
public:
  Init_ControlOptimus_Feedback_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::optimus_interfaces::action::ControlOptimus_Feedback message(::optimus_interfaces::action::ControlOptimus_Feedback::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_Feedback>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_Feedback_message();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_SendGoal_Request_goal
{
public:
  explicit Init_ControlOptimus_SendGoal_Request_goal(::optimus_interfaces::action::ControlOptimus_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::action::ControlOptimus_SendGoal_Request goal(::optimus_interfaces::action::ControlOptimus_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_SendGoal_Request msg_;
};

class Init_ControlOptimus_SendGoal_Request_goal_id
{
public:
  Init_ControlOptimus_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlOptimus_SendGoal_Request_goal goal_id(::optimus_interfaces::action::ControlOptimus_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ControlOptimus_SendGoal_Request_goal(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_SendGoal_Request>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_SendGoal_Request_goal_id();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_SendGoal_Response_stamp
{
public:
  explicit Init_ControlOptimus_SendGoal_Response_stamp(::optimus_interfaces::action::ControlOptimus_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::action::ControlOptimus_SendGoal_Response stamp(::optimus_interfaces::action::ControlOptimus_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_SendGoal_Response msg_;
};

class Init_ControlOptimus_SendGoal_Response_accepted
{
public:
  Init_ControlOptimus_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlOptimus_SendGoal_Response_stamp accepted(::optimus_interfaces::action::ControlOptimus_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ControlOptimus_SendGoal_Response_stamp(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_SendGoal_Response>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_SendGoal_Response_accepted();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_GetResult_Request_goal_id
{
public:
  Init_ControlOptimus_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::optimus_interfaces::action::ControlOptimus_GetResult_Request goal_id(::optimus_interfaces::action::ControlOptimus_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_GetResult_Request>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_GetResult_Request_goal_id();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_GetResult_Response_result
{
public:
  explicit Init_ControlOptimus_GetResult_Response_result(::optimus_interfaces::action::ControlOptimus_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::action::ControlOptimus_GetResult_Response result(::optimus_interfaces::action::ControlOptimus_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_GetResult_Response msg_;
};

class Init_ControlOptimus_GetResult_Response_status
{
public:
  Init_ControlOptimus_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlOptimus_GetResult_Response_result status(::optimus_interfaces::action::ControlOptimus_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ControlOptimus_GetResult_Response_result(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_GetResult_Response>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_GetResult_Response_status();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace action
{

namespace builder
{

class Init_ControlOptimus_FeedbackMessage_feedback
{
public:
  explicit Init_ControlOptimus_FeedbackMessage_feedback(::optimus_interfaces::action::ControlOptimus_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::action::ControlOptimus_FeedbackMessage feedback(::optimus_interfaces::action::ControlOptimus_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_FeedbackMessage msg_;
};

class Init_ControlOptimus_FeedbackMessage_goal_id
{
public:
  Init_ControlOptimus_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlOptimus_FeedbackMessage_feedback goal_id(::optimus_interfaces::action::ControlOptimus_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ControlOptimus_FeedbackMessage_feedback(msg_);
  }

private:
  ::optimus_interfaces::action::ControlOptimus_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::action::ControlOptimus_FeedbackMessage>()
{
  return optimus_interfaces::action::builder::Init_ControlOptimus_FeedbackMessage_goal_id();
}

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__BUILDER_HPP_
