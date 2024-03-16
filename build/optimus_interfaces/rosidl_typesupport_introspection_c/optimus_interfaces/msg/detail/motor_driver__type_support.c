// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from optimus_interfaces:msg/MotorDriver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "optimus_interfaces/msg/detail/motor_driver__rosidl_typesupport_introspection_c.h"
#include "optimus_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "optimus_interfaces/msg/detail/motor_driver__functions.h"
#include "optimus_interfaces/msg/detail/motor_driver__struct.h"


// Include directives for member types
// Member `motor_pwm_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  optimus_interfaces__msg__MotorDriver__init(message_memory);
}

void optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_fini_function(void * message_memory)
{
  optimus_interfaces__msg__MotorDriver__fini(message_memory);
}

size_t optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__size_function__MotorDriver__motor_pwm_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__get_const_function__MotorDriver__motor_pwm_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__get_function__MotorDriver__motor_pwm_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__fetch_function__MotorDriver__motor_pwm_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__get_const_function__MotorDriver__motor_pwm_values(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__assign_function__MotorDriver__motor_pwm_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__get_function__MotorDriver__motor_pwm_values(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__resize_function__MotorDriver__motor_pwm_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_member_array[1] = {
  {
    "motor_pwm_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(optimus_interfaces__msg__MotorDriver, motor_pwm_values),  // bytes offset in struct
    NULL,  // default value
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__size_function__MotorDriver__motor_pwm_values,  // size() function pointer
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__get_const_function__MotorDriver__motor_pwm_values,  // get_const(index) function pointer
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__get_function__MotorDriver__motor_pwm_values,  // get(index) function pointer
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__fetch_function__MotorDriver__motor_pwm_values,  // fetch(index, &value) function pointer
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__assign_function__MotorDriver__motor_pwm_values,  // assign(index, value) function pointer
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__resize_function__MotorDriver__motor_pwm_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_members = {
  "optimus_interfaces__msg",  // message namespace
  "MotorDriver",  // message name
  1,  // number of fields
  sizeof(optimus_interfaces__msg__MotorDriver),
  optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_member_array,  // message members
  optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_init_function,  // function to initialize message memory (memory has to be allocated)
  optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_type_support_handle = {
  0,
  &optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_optimus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, optimus_interfaces, msg, MotorDriver)() {
  if (!optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_type_support_handle.typesupport_identifier) {
    optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &optimus_interfaces__msg__MotorDriver__rosidl_typesupport_introspection_c__MotorDriver_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
