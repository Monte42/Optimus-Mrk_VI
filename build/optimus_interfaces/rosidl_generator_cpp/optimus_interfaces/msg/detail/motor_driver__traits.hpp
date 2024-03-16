// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from optimus_interfaces:msg/MotorDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__TRAITS_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "optimus_interfaces/msg/detail/motor_driver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace optimus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorDriver & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_pwm_values
  {
    if (msg.motor_pwm_values.size() == 0) {
      out << "motor_pwm_values: []";
    } else {
      out << "motor_pwm_values: [";
      size_t pending_items = msg.motor_pwm_values.size();
      for (auto item : msg.motor_pwm_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const MotorDriver & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_pwm_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_pwm_values.size() == 0) {
      out << "motor_pwm_values: []\n";
    } else {
      out << "motor_pwm_values:\n";
      for (auto item : msg.motor_pwm_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorDriver & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::msg::MotorDriver & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::msg::MotorDriver & msg)
{
  return optimus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::msg::MotorDriver>()
{
  return "optimus_interfaces::msg::MotorDriver";
}

template<>
inline const char * name<optimus_interfaces::msg::MotorDriver>()
{
  return "optimus_interfaces/msg/MotorDriver";
}

template<>
struct has_fixed_size<optimus_interfaces::msg::MotorDriver>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<optimus_interfaces::msg::MotorDriver>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<optimus_interfaces::msg::MotorDriver>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__TRAITS_HPP_
