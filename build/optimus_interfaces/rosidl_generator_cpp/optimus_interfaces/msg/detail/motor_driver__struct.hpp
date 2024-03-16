// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from optimus_interfaces:msg/MotorDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__STRUCT_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__msg__MotorDriver __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__msg__MotorDriver __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorDriver_
{
  using Type = MotorDriver_<ContainerAllocator>;

  explicit MotorDriver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotorDriver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motor_pwm_values_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _motor_pwm_values_type motor_pwm_values;

  // setters for named parameter idiom
  Type & set__motor_pwm_values(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->motor_pwm_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::msg::MotorDriver_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::msg::MotorDriver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::msg::MotorDriver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::msg::MotorDriver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__msg__MotorDriver
    std::shared_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__msg__MotorDriver
    std::shared_ptr<optimus_interfaces::msg::MotorDriver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorDriver_ & other) const
  {
    if (this->motor_pwm_values != other.motor_pwm_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorDriver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorDriver_

// alias to use template instance with default allocator
using MotorDriver =
  optimus_interfaces::msg::MotorDriver_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__STRUCT_HPP_
