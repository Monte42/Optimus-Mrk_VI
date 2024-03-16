// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from optimus_interfaces:srv/AutonomousDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__TRAITS_HPP_
#define OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "optimus_interfaces/srv/detail/autonomous_driver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace optimus_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AutonomousDriver_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutonomousDriver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutonomousDriver_Request & msg, bool use_flow_style = false)
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

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::srv::AutonomousDriver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::srv::AutonomousDriver_Request & msg)
{
  return optimus_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::srv::AutonomousDriver_Request>()
{
  return "optimus_interfaces::srv::AutonomousDriver_Request";
}

template<>
inline const char * name<optimus_interfaces::srv::AutonomousDriver_Request>()
{
  return "optimus_interfaces/srv/AutonomousDriver_Request";
}

template<>
struct has_fixed_size<optimus_interfaces::srv::AutonomousDriver_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<optimus_interfaces::srv::AutonomousDriver_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<optimus_interfaces::srv::AutonomousDriver_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace optimus_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AutonomousDriver_Response & msg,
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
  const AutonomousDriver_Response & msg,
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

inline std::string to_yaml(const AutonomousDriver_Response & msg, bool use_flow_style = false)
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

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::srv::AutonomousDriver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::srv::AutonomousDriver_Response & msg)
{
  return optimus_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::srv::AutonomousDriver_Response>()
{
  return "optimus_interfaces::srv::AutonomousDriver_Response";
}

template<>
inline const char * name<optimus_interfaces::srv::AutonomousDriver_Response>()
{
  return "optimus_interfaces/srv/AutonomousDriver_Response";
}

template<>
struct has_fixed_size<optimus_interfaces::srv::AutonomousDriver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<optimus_interfaces::srv::AutonomousDriver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<optimus_interfaces::srv::AutonomousDriver_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<optimus_interfaces::srv::AutonomousDriver>()
{
  return "optimus_interfaces::srv::AutonomousDriver";
}

template<>
inline const char * name<optimus_interfaces::srv::AutonomousDriver>()
{
  return "optimus_interfaces/srv/AutonomousDriver";
}

template<>
struct has_fixed_size<optimus_interfaces::srv::AutonomousDriver>
  : std::integral_constant<
    bool,
    has_fixed_size<optimus_interfaces::srv::AutonomousDriver_Request>::value &&
    has_fixed_size<optimus_interfaces::srv::AutonomousDriver_Response>::value
  >
{
};

template<>
struct has_bounded_size<optimus_interfaces::srv::AutonomousDriver>
  : std::integral_constant<
    bool,
    has_bounded_size<optimus_interfaces::srv::AutonomousDriver_Request>::value &&
    has_bounded_size<optimus_interfaces::srv::AutonomousDriver_Response>::value
  >
{
};

template<>
struct is_service<optimus_interfaces::srv::AutonomousDriver>
  : std::true_type
{
};

template<>
struct is_service_request<optimus_interfaces::srv::AutonomousDriver_Request>
  : std::true_type
{
};

template<>
struct is_service_response<optimus_interfaces::srv::AutonomousDriver_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__TRAITS_HPP_
