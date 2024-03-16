// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from optimus_interfaces:action/ControlOptimus.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__TRAITS_HPP_
#define OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_motor_1
  {
    out << "left_motor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_1, out);
    out << ", ";
  }

  // member: left_motor_2
  {
    out << "left_motor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_2, out);
    out << ", ";
  }

  // member: right_motor_1
  {
    out << "right_motor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_1, out);
    out << ", ";
  }

  // member: right_motor_2
  {
    out << "right_motor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_2, out);
    out << ", ";
  }

  // member: is_autonomous
  {
    out << "is_autonomous: ";
    rosidl_generator_traits::value_to_yaml(msg.is_autonomous, out);
    out << ", ";
  }

  // member: is_recording
  {
    out << "is_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recording, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_motor_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_1, out);
    out << "\n";
  }

  // member: left_motor_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_2, out);
    out << "\n";
  }

  // member: right_motor_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_1, out);
    out << "\n";
  }

  // member: right_motor_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_2, out);
    out << "\n";
  }

  // member: is_autonomous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_autonomous: ";
    rosidl_generator_traits::value_to_yaml(msg.is_autonomous, out);
    out << "\n";
  }

  // member: is_recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recording, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_Goal & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_Goal>()
{
  return "optimus_interfaces::action::ControlOptimus_Goal";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_Goal>()
{
  return "optimus_interfaces/action/ControlOptimus_Goal";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: is_autonomous
  {
    out << "is_autonomous: ";
    rosidl_generator_traits::value_to_yaml(msg.is_autonomous, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: is_autonomous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_autonomous: ";
    rosidl_generator_traits::value_to_yaml(msg.is_autonomous, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_Result & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_Result>()
{
  return "optimus_interfaces::action::ControlOptimus_Result";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_Result>()
{
  return "optimus_interfaces/action/ControlOptimus_Result";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_Feedback & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_Feedback>()
{
  return "optimus_interfaces::action::ControlOptimus_Feedback";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_Feedback>()
{
  return "optimus_interfaces/action/ControlOptimus_Feedback";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "optimus_interfaces/action/detail/control_optimus__traits.hpp"

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_SendGoal_Request & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_SendGoal_Request>()
{
  return "optimus_interfaces::action::ControlOptimus_SendGoal_Request";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_SendGoal_Request>()
{
  return "optimus_interfaces/action/ControlOptimus_SendGoal_Request";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<optimus_interfaces::action::ControlOptimus_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<optimus_interfaces::action::ControlOptimus_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_SendGoal_Response & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_SendGoal_Response>()
{
  return "optimus_interfaces::action::ControlOptimus_SendGoal_Response";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_SendGoal_Response>()
{
  return "optimus_interfaces/action/ControlOptimus_SendGoal_Response";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_SendGoal>()
{
  return "optimus_interfaces::action::ControlOptimus_SendGoal";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_SendGoal>()
{
  return "optimus_interfaces/action/ControlOptimus_SendGoal";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<optimus_interfaces::action::ControlOptimus_SendGoal_Request>::value &&
    has_fixed_size<optimus_interfaces::action::ControlOptimus_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<optimus_interfaces::action::ControlOptimus_SendGoal_Request>::value &&
    has_bounded_size<optimus_interfaces::action::ControlOptimus_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<optimus_interfaces::action::ControlOptimus_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<optimus_interfaces::action::ControlOptimus_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<optimus_interfaces::action::ControlOptimus_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_GetResult_Request & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_GetResult_Request>()
{
  return "optimus_interfaces::action::ControlOptimus_GetResult_Request";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_GetResult_Request>()
{
  return "optimus_interfaces/action/ControlOptimus_GetResult_Request";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__traits.hpp"

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_GetResult_Response & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_GetResult_Response>()
{
  return "optimus_interfaces::action::ControlOptimus_GetResult_Response";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_GetResult_Response>()
{
  return "optimus_interfaces/action/ControlOptimus_GetResult_Response";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<optimus_interfaces::action::ControlOptimus_Result>::value> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<optimus_interfaces::action::ControlOptimus_Result>::value> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_GetResult>()
{
  return "optimus_interfaces::action::ControlOptimus_GetResult";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_GetResult>()
{
  return "optimus_interfaces/action/ControlOptimus_GetResult";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<optimus_interfaces::action::ControlOptimus_GetResult_Request>::value &&
    has_fixed_size<optimus_interfaces::action::ControlOptimus_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<optimus_interfaces::action::ControlOptimus_GetResult_Request>::value &&
    has_bounded_size<optimus_interfaces::action::ControlOptimus_GetResult_Response>::value
  >
{
};

template<>
struct is_service<optimus_interfaces::action::ControlOptimus_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<optimus_interfaces::action::ControlOptimus_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<optimus_interfaces::action::ControlOptimus_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__traits.hpp"

namespace optimus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ControlOptimus_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlOptimus_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlOptimus_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::action::ControlOptimus_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::action::ControlOptimus_FeedbackMessage & msg)
{
  return optimus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::action::ControlOptimus_FeedbackMessage>()
{
  return "optimus_interfaces::action::ControlOptimus_FeedbackMessage";
}

template<>
inline const char * name<optimus_interfaces::action::ControlOptimus_FeedbackMessage>()
{
  return "optimus_interfaces/action/ControlOptimus_FeedbackMessage";
}

template<>
struct has_fixed_size<optimus_interfaces::action::ControlOptimus_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<optimus_interfaces::action::ControlOptimus_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<optimus_interfaces::action::ControlOptimus_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<optimus_interfaces::action::ControlOptimus_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<optimus_interfaces::action::ControlOptimus_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<optimus_interfaces::action::ControlOptimus>
  : std::true_type
{
};

template<>
struct is_action_goal<optimus_interfaces::action::ControlOptimus_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<optimus_interfaces::action::ControlOptimus_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<optimus_interfaces::action::ControlOptimus_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__TRAITS_HPP_
