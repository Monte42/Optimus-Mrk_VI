// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from optimus_interfaces:msg/UltraSonicRange.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__BUILDER_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "optimus_interfaces/msg/detail/ultra_sonic_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace optimus_interfaces
{

namespace msg
{

namespace builder
{

class Init_UltraSonicRange_debug_message
{
public:
  explicit Init_UltraSonicRange_debug_message(::optimus_interfaces::msg::UltraSonicRange & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::msg::UltraSonicRange debug_message(::optimus_interfaces::msg::UltraSonicRange::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::msg::UltraSonicRange msg_;
};

class Init_UltraSonicRange_right_track_dist
{
public:
  explicit Init_UltraSonicRange_right_track_dist(::optimus_interfaces::msg::UltraSonicRange & msg)
  : msg_(msg)
  {}
  Init_UltraSonicRange_debug_message right_track_dist(::optimus_interfaces::msg::UltraSonicRange::_right_track_dist_type arg)
  {
    msg_.right_track_dist = std::move(arg);
    return Init_UltraSonicRange_debug_message(msg_);
  }

private:
  ::optimus_interfaces::msg::UltraSonicRange msg_;
};

class Init_UltraSonicRange_left_track_dist
{
public:
  Init_UltraSonicRange_left_track_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UltraSonicRange_right_track_dist left_track_dist(::optimus_interfaces::msg::UltraSonicRange::_left_track_dist_type arg)
  {
    msg_.left_track_dist = std::move(arg);
    return Init_UltraSonicRange_right_track_dist(msg_);
  }

private:
  ::optimus_interfaces::msg::UltraSonicRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::msg::UltraSonicRange>()
{
  return optimus_interfaces::msg::builder::Init_UltraSonicRange_left_track_dist();
}

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__BUILDER_HPP_
