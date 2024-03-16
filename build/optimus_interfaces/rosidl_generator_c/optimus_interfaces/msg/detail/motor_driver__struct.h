// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from optimus_interfaces:msg/MotorDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__STRUCT_H_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_pwm_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorDriver in the package optimus_interfaces.
typedef struct optimus_interfaces__msg__MotorDriver
{
  rosidl_runtime_c__int64__Sequence motor_pwm_values;
} optimus_interfaces__msg__MotorDriver;

// Struct for a sequence of optimus_interfaces__msg__MotorDriver.
typedef struct optimus_interfaces__msg__MotorDriver__Sequence
{
  optimus_interfaces__msg__MotorDriver * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__msg__MotorDriver__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_DRIVER__STRUCT_H_
