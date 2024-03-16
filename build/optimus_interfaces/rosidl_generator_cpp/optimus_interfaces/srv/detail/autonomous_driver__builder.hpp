// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from optimus_interfaces:srv/AutonomousDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__BUILDER_HPP_
#define OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "optimus_interfaces/srv/detail/autonomous_driver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace optimus_interfaces
{

namespace srv
{

namespace builder
{

class Init_AutonomousDriver_Request_command
{
public:
  Init_AutonomousDriver_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::optimus_interfaces::srv::AutonomousDriver_Request command(::optimus_interfaces::srv::AutonomousDriver_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::srv::AutonomousDriver_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::srv::AutonomousDriver_Request>()
{
  return optimus_interfaces::srv::builder::Init_AutonomousDriver_Request_command();
}

}  // namespace optimus_interfaces


namespace optimus_interfaces
{

namespace srv
{

namespace builder
{

class Init_AutonomousDriver_Response_success
{
public:
  Init_AutonomousDriver_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::optimus_interfaces::srv::AutonomousDriver_Response success(::optimus_interfaces::srv::AutonomousDriver_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::srv::AutonomousDriver_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::srv::AutonomousDriver_Response>()
{
  return optimus_interfaces::srv::builder::Init_AutonomousDriver_Response_success();
}

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__BUILDER_HPP_
