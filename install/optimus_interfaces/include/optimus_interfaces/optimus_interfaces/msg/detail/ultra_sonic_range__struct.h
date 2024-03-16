// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from optimus_interfaces:msg/UltraSonicRange.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__STRUCT_H_
#define OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UltraSonicRange in the package optimus_interfaces.
typedef struct optimus_interfaces__msg__UltraSonicRange
{
  double left_track_dist;
  double right_track_dist;
  rosidl_runtime_c__String debug_message;
} optimus_interfaces__msg__UltraSonicRange;

// Struct for a sequence of optimus_interfaces__msg__UltraSonicRange.
typedef struct optimus_interfaces__msg__UltraSonicRange__Sequence
{
  optimus_interfaces__msg__UltraSonicRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__msg__UltraSonicRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__STRUCT_H_
