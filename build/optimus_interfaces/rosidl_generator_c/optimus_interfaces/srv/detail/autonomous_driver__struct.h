// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from optimus_interfaces:srv/AutonomousDriver.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__STRUCT_H_
#define OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AutonomousDriver in the package optimus_interfaces.
typedef struct optimus_interfaces__srv__AutonomousDriver_Request
{
  int64_t command;
} optimus_interfaces__srv__AutonomousDriver_Request;

// Struct for a sequence of optimus_interfaces__srv__AutonomousDriver_Request.
typedef struct optimus_interfaces__srv__AutonomousDriver_Request__Sequence
{
  optimus_interfaces__srv__AutonomousDriver_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__srv__AutonomousDriver_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AutonomousDriver in the package optimus_interfaces.
typedef struct optimus_interfaces__srv__AutonomousDriver_Response
{
  bool success;
} optimus_interfaces__srv__AutonomousDriver_Response;

// Struct for a sequence of optimus_interfaces__srv__AutonomousDriver_Response.
typedef struct optimus_interfaces__srv__AutonomousDriver_Response__Sequence
{
  optimus_interfaces__srv__AutonomousDriver_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__srv__AutonomousDriver_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__SRV__DETAIL__AUTONOMOUS_DRIVER__STRUCT_H_
