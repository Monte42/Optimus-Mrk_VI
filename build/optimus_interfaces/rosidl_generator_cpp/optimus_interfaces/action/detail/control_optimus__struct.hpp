// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from optimus_interfaces:action/ControlOptimus.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__STRUCT_HPP_
#define OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_Goal __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_Goal __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_Goal_
{
  using Type = ControlOptimus_Goal_<ContainerAllocator>;

  explicit ControlOptimus_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor_1 = 0ll;
      this->left_motor_2 = 0ll;
      this->right_motor_1 = 0ll;
      this->right_motor_2 = 0ll;
      this->is_autonomous = false;
      this->is_recording = false;
    }
  }

  explicit ControlOptimus_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor_1 = 0ll;
      this->left_motor_2 = 0ll;
      this->right_motor_1 = 0ll;
      this->right_motor_2 = 0ll;
      this->is_autonomous = false;
      this->is_recording = false;
    }
  }

  // field types and members
  using _left_motor_1_type =
    int64_t;
  _left_motor_1_type left_motor_1;
  using _left_motor_2_type =
    int64_t;
  _left_motor_2_type left_motor_2;
  using _right_motor_1_type =
    int64_t;
  _right_motor_1_type right_motor_1;
  using _right_motor_2_type =
    int64_t;
  _right_motor_2_type right_motor_2;
  using _is_autonomous_type =
    bool;
  _is_autonomous_type is_autonomous;
  using _is_recording_type =
    bool;
  _is_recording_type is_recording;

  // setters for named parameter idiom
  Type & set__left_motor_1(
    const int64_t & _arg)
  {
    this->left_motor_1 = _arg;
    return *this;
  }
  Type & set__left_motor_2(
    const int64_t & _arg)
  {
    this->left_motor_2 = _arg;
    return *this;
  }
  Type & set__right_motor_1(
    const int64_t & _arg)
  {
    this->right_motor_1 = _arg;
    return *this;
  }
  Type & set__right_motor_2(
    const int64_t & _arg)
  {
    this->right_motor_2 = _arg;
    return *this;
  }
  Type & set__is_autonomous(
    const bool & _arg)
  {
    this->is_autonomous = _arg;
    return *this;
  }
  Type & set__is_recording(
    const bool & _arg)
  {
    this->is_recording = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_Goal
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_Goal
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_Goal_ & other) const
  {
    if (this->left_motor_1 != other.left_motor_1) {
      return false;
    }
    if (this->left_motor_2 != other.left_motor_2) {
      return false;
    }
    if (this->right_motor_1 != other.right_motor_1) {
      return false;
    }
    if (this->right_motor_2 != other.right_motor_2) {
      return false;
    }
    if (this->is_autonomous != other.is_autonomous) {
      return false;
    }
    if (this->is_recording != other.is_recording) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_Goal_

// alias to use template instance with default allocator
using ControlOptimus_Goal =
  optimus_interfaces::action::ControlOptimus_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces


#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_Result __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_Result __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_Result_
{
  using Type = ControlOptimus_Result_<ContainerAllocator>;

  explicit ControlOptimus_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->is_autonomous = false;
    }
  }

  explicit ControlOptimus_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->is_autonomous = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _is_autonomous_type =
    bool;
  _is_autonomous_type is_autonomous;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__is_autonomous(
    const bool & _arg)
  {
    this->is_autonomous = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_Result
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_Result
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_Result_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->is_autonomous != other.is_autonomous) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_Result_

// alias to use template instance with default allocator
using ControlOptimus_Result =
  optimus_interfaces::action::ControlOptimus_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces


#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_Feedback __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_Feedback_
{
  using Type = ControlOptimus_Feedback_<ContainerAllocator>;

  explicit ControlOptimus_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit ControlOptimus_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_Feedback
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_Feedback
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_Feedback_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_Feedback_

// alias to use template instance with default allocator
using ControlOptimus_Feedback =
  optimus_interfaces::action::ControlOptimus_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "optimus_interfaces/action/detail/control_optimus__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Request __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_SendGoal_Request_
{
  using Type = ControlOptimus_SendGoal_Request_<ContainerAllocator>;

  explicit ControlOptimus_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ControlOptimus_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const optimus_interfaces::action::ControlOptimus_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Request
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Request
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_SendGoal_Request_

// alias to use template instance with default allocator
using ControlOptimus_SendGoal_Request =
  optimus_interfaces::action::ControlOptimus_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Response __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_SendGoal_Response_
{
  using Type = ControlOptimus_SendGoal_Response_<ContainerAllocator>;

  explicit ControlOptimus_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ControlOptimus_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Response
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_SendGoal_Response
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_SendGoal_Response_

// alias to use template instance with default allocator
using ControlOptimus_SendGoal_Response =
  optimus_interfaces::action::ControlOptimus_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces

namespace optimus_interfaces
{

namespace action
{

struct ControlOptimus_SendGoal
{
  using Request = optimus_interfaces::action::ControlOptimus_SendGoal_Request;
  using Response = optimus_interfaces::action::ControlOptimus_SendGoal_Response;
};

}  // namespace action

}  // namespace optimus_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Request __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_GetResult_Request_
{
  using Type = ControlOptimus_GetResult_Request_<ContainerAllocator>;

  explicit ControlOptimus_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ControlOptimus_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Request
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Request
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_GetResult_Request_

// alias to use template instance with default allocator
using ControlOptimus_GetResult_Request =
  optimus_interfaces::action::ControlOptimus_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Response __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_GetResult_Response_
{
  using Type = ControlOptimus_GetResult_Response_<ContainerAllocator>;

  explicit ControlOptimus_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ControlOptimus_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const optimus_interfaces::action::ControlOptimus_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Response
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_GetResult_Response
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_GetResult_Response_

// alias to use template instance with default allocator
using ControlOptimus_GetResult_Response =
  optimus_interfaces::action::ControlOptimus_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces

namespace optimus_interfaces
{

namespace action
{

struct ControlOptimus_GetResult
{
  using Request = optimus_interfaces::action::ControlOptimus_GetResult_Request;
  using Response = optimus_interfaces::action::ControlOptimus_GetResult_Response;
};

}  // namespace action

}  // namespace optimus_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__action__ControlOptimus_FeedbackMessage __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ControlOptimus_FeedbackMessage_
{
  using Type = ControlOptimus_FeedbackMessage_<ContainerAllocator>;

  explicit ControlOptimus_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ControlOptimus_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const optimus_interfaces::action::ControlOptimus_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_FeedbackMessage
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__action__ControlOptimus_FeedbackMessage
    std::shared_ptr<optimus_interfaces::action::ControlOptimus_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlOptimus_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlOptimus_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlOptimus_FeedbackMessage_

// alias to use template instance with default allocator
using ControlOptimus_FeedbackMessage =
  optimus_interfaces::action::ControlOptimus_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace optimus_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace optimus_interfaces
{

namespace action
{

struct ControlOptimus
{
  /// The goal message defined in the action definition.
  using Goal = optimus_interfaces::action::ControlOptimus_Goal;
  /// The result message defined in the action definition.
  using Result = optimus_interfaces::action::ControlOptimus_Result;
  /// The feedback message defined in the action definition.
  using Feedback = optimus_interfaces::action::ControlOptimus_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = optimus_interfaces::action::ControlOptimus_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = optimus_interfaces::action::ControlOptimus_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = optimus_interfaces::action::ControlOptimus_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ControlOptimus ControlOptimus;

}  // namespace action

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__STRUCT_HPP_
