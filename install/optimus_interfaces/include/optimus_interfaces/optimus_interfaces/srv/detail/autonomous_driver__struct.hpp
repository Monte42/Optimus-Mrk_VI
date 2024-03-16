// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from optimus_interfaces:srv/AutonomousDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__STRUCT_HPP_
#define OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Request __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Request __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutonomousDriver_Request_
{
  using Type = AutonomousDriver_Request_<ContainerAllocator>;

  explicit AutonomousDriver_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0ll;
    }
  }

  explicit AutonomousDriver_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0ll;
    }
  }

  // field types and members
  using _command_type =
    int64_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const int64_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Request
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Request
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutonomousDriver_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutonomousDriver_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutonomousDriver_Request_

// alias to use template instance with default allocator
using AutonomousDriver_Request =
  optimus_interfaces::srv::AutonomousDriver_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace optimus_interfaces


#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Response __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Response __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutonomousDriver_Response_
{
  using Type = AutonomousDriver_Response_<ContainerAllocator>;

  explicit AutonomousDriver_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit AutonomousDriver_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Response
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__srv__AutonomousDriver_Response
    std::shared_ptr<optimus_interfaces::srv::AutonomousDriver_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutonomousDriver_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutonomousDriver_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutonomousDriver_Response_

// alias to use template instance with default allocator
using AutonomousDriver_Response =
  optimus_interfaces::srv::AutonomousDriver_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace optimus_interfaces

namespace optimus_interfaces
{

namespace srv
{

struct AutonomousDriver
{
  using Request = optimus_interfaces::srv::AutonomousDriver_Request;
  using Response = optimus_interfaces::srv::AutonomousDriver_Response;
};

}  // namespace srv

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__STRUCT_HPP_
