// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from optimus_interfaces:msg/UltraSonicRange.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__TRAITS_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "optimus_interfaces/msg/detail/ultra_sonic_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace optimus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UltraSonicRange & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_track_dist
  {
    out << "left_track_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_track_dist, out);
    out << ", ";
  }

  // member: right_track_dist
  {
    out << "right_track_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_track_dist, out);
    out << ", ";
  }

  // member: debug_message
  {
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UltraSonicRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_track_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_track_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_track_dist, out);
    out << "\n";
  }

  // member: right_track_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_track_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_track_dist, out);
    out << "\n";
  }

  // member: debug_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UltraSonicRange & msg, bool use_flow_style = false)
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
  const optimus_interfaces::msg::UltraSonicRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::msg::UltraSonicRange & msg)
{
  return optimus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::msg::UltraSonicRange>()
{
  return "optimus_interfaces::msg::UltraSonicRange";
}

template<>
inline const char * name<optimus_interfaces::msg::UltraSonicRange>()
{
  return "optimus_interfaces/msg/UltraSonicRange";
}

template<>
struct has_fixed_size<optimus_interfaces::msg::UltraSonicRange>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<optimus_interfaces::msg::UltraSonicRange>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<optimus_interfaces::msg::UltraSonicRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__TRAITS_HPP_
