// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_control_interfaces:action/AngleControl.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__BUILDER_HPP_
#define MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_Goal_angle_deg
{
public:
  explicit Init_AngleControl_Goal_angle_deg(::motor_control_interfaces::action::AngleControl_Goal & msg)
  : msg_(msg)
  {}
  ::motor_control_interfaces::action::AngleControl_Goal angle_deg(::motor_control_interfaces::action::AngleControl_Goal::_angle_deg_type arg)
  {
    msg_.angle_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_Goal msg_;
};

class Init_AngleControl_Goal_speed_dps
{
public:
  explicit Init_AngleControl_Goal_speed_dps(::motor_control_interfaces::action::AngleControl_Goal & msg)
  : msg_(msg)
  {}
  Init_AngleControl_Goal_angle_deg speed_dps(::motor_control_interfaces::action::AngleControl_Goal::_speed_dps_type arg)
  {
    msg_.speed_dps = std::move(arg);
    return Init_AngleControl_Goal_angle_deg(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_Goal msg_;
};

class Init_AngleControl_Goal_motor_id
{
public:
  Init_AngleControl_Goal_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleControl_Goal_speed_dps motor_id(::motor_control_interfaces::action::AngleControl_Goal::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_AngleControl_Goal_speed_dps(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_Goal>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_Goal_motor_id();
}

}  // namespace motor_control_interfaces


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_Result_current_angle
{
public:
  explicit Init_AngleControl_Result_current_angle(::motor_control_interfaces::action::AngleControl_Result & msg)
  : msg_(msg)
  {}
  ::motor_control_interfaces::action::AngleControl_Result current_angle(::motor_control_interfaces::action::AngleControl_Result::_current_angle_type arg)
  {
    msg_.current_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_Result msg_;
};

class Init_AngleControl_Result_success
{
public:
  Init_AngleControl_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleControl_Result_current_angle success(::motor_control_interfaces::action::AngleControl_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AngleControl_Result_current_angle(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_Result>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_Result_success();
}

}  // namespace motor_control_interfaces


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_Feedback_remaining
{
public:
  Init_AngleControl_Feedback_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_control_interfaces::action::AngleControl_Feedback remaining(::motor_control_interfaces::action::AngleControl_Feedback::_remaining_type arg)
  {
    msg_.remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_Feedback>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_Feedback_remaining();
}

}  // namespace motor_control_interfaces


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_SendGoal_Request_goal
{
public:
  explicit Init_AngleControl_SendGoal_Request_goal(::motor_control_interfaces::action::AngleControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::motor_control_interfaces::action::AngleControl_SendGoal_Request goal(::motor_control_interfaces::action::AngleControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_SendGoal_Request msg_;
};

class Init_AngleControl_SendGoal_Request_goal_id
{
public:
  Init_AngleControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleControl_SendGoal_Request_goal goal_id(::motor_control_interfaces::action::AngleControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AngleControl_SendGoal_Request_goal(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_SendGoal_Request>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_SendGoal_Request_goal_id();
}

}  // namespace motor_control_interfaces


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_SendGoal_Response_stamp
{
public:
  explicit Init_AngleControl_SendGoal_Response_stamp(::motor_control_interfaces::action::AngleControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::motor_control_interfaces::action::AngleControl_SendGoal_Response stamp(::motor_control_interfaces::action::AngleControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_SendGoal_Response msg_;
};

class Init_AngleControl_SendGoal_Response_accepted
{
public:
  Init_AngleControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleControl_SendGoal_Response_stamp accepted(::motor_control_interfaces::action::AngleControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AngleControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_SendGoal_Response>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_SendGoal_Response_accepted();
}

}  // namespace motor_control_interfaces


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_GetResult_Request_goal_id
{
public:
  Init_AngleControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_control_interfaces::action::AngleControl_GetResult_Request goal_id(::motor_control_interfaces::action::AngleControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_GetResult_Request>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_GetResult_Request_goal_id();
}

}  // namespace motor_control_interfaces


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_GetResult_Response_result
{
public:
  explicit Init_AngleControl_GetResult_Response_result(::motor_control_interfaces::action::AngleControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::motor_control_interfaces::action::AngleControl_GetResult_Response result(::motor_control_interfaces::action::AngleControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_GetResult_Response msg_;
};

class Init_AngleControl_GetResult_Response_status
{
public:
  Init_AngleControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleControl_GetResult_Response_result status(::motor_control_interfaces::action::AngleControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AngleControl_GetResult_Response_result(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_GetResult_Response>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_GetResult_Response_status();
}

}  // namespace motor_control_interfaces


namespace motor_control_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleControl_FeedbackMessage_feedback
{
public:
  explicit Init_AngleControl_FeedbackMessage_feedback(::motor_control_interfaces::action::AngleControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::motor_control_interfaces::action::AngleControl_FeedbackMessage feedback(::motor_control_interfaces::action::AngleControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_FeedbackMessage msg_;
};

class Init_AngleControl_FeedbackMessage_goal_id
{
public:
  Init_AngleControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleControl_FeedbackMessage_feedback goal_id(::motor_control_interfaces::action::AngleControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AngleControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::motor_control_interfaces::action::AngleControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_control_interfaces::action::AngleControl_FeedbackMessage>()
{
  return motor_control_interfaces::action::builder::Init_AngleControl_FeedbackMessage_goal_id();
}

}  // namespace motor_control_interfaces

#endif  // MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__BUILDER_HPP_
