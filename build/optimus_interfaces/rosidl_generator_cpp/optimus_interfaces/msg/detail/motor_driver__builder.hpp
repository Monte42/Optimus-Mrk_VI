// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from optimus_interfaces:msg/MotorDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__BUILDER_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "optimus_interfaces/msg/detail/motor_driver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace optimus_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorDriver_motor_pwm_values
{
public:
  Init_MotorDriver_motor_pwm_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::optimus_interfaces::msg::MotorDriver motor_pwm_values(::optimus_interfaces::msg::MotorDriver::_motor_pwm_values_type arg)
  {
    msg_.motor_pwm_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::msg::MotorDriver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::msg::MotorDriver>()
{
  return optimus_interfaces::msg::builder::Init_MotorDriver_motor_pwm_values();
}

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__BUILDER_HPP_
