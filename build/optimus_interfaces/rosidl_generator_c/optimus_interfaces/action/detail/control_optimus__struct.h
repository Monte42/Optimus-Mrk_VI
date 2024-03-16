// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from optimus_interfaces:action/ControlOptimus.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__STRUCT_H_
#define OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_Goal
{
  int64_t left_motor_1;
  int64_t left_motor_2;
  int64_t right_motor_1;
  int64_t right_motor_2;
  bool is_autonomous;
  bool is_recording;
} optimus_interfaces__action__ControlOptimus_Goal;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_Goal.
typedef struct optimus_interfaces__action__ControlOptimus_Goal__Sequence
{
  optimus_interfaces__action__ControlOptimus_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_Result
{
  rosidl_runtime_c__String message;
  bool is_autonomous;
} optimus_interfaces__action__ControlOptimus_Result;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_Result.
typedef struct optimus_interfaces__action__ControlOptimus_Result__Sequence
{
  optimus_interfaces__action__ControlOptimus_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_Feedback
{
  rosidl_runtime_c__String message;
} optimus_interfaces__action__ControlOptimus_Feedback;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_Feedback.
typedef struct optimus_interfaces__action__ControlOptimus_Feedback__Sequence
{
  optimus_interfaces__action__ControlOptimus_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "optimus_interfaces/action/detail/control_optimus__struct.h"

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  optimus_interfaces__action__ControlOptimus_Goal goal;
} optimus_interfaces__action__ControlOptimus_SendGoal_Request;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_SendGoal_Request.
typedef struct optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence
{
  optimus_interfaces__action__ControlOptimus_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} optimus_interfaces__action__ControlOptimus_SendGoal_Response;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_SendGoal_Response.
typedef struct optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence
{
  optimus_interfaces__action__ControlOptimus_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} optimus_interfaces__action__ControlOptimus_GetResult_Request;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_GetResult_Request.
typedef struct optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence
{
  optimus_interfaces__action__ControlOptimus_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.h"

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_GetResult_Response
{
  int8_t status;
  optimus_interfaces__action__ControlOptimus_Result result;
} optimus_interfaces__action__ControlOptimus_GetResult_Response;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_GetResult_Response.
typedef struct optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence
{
  optimus_interfaces__action__ControlOptimus_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.h"

/// Struct defined in action/ControlOptimus in the package optimus_interfaces.
typedef struct optimus_interfaces__action__ControlOptimus_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  optimus_interfaces__action__ControlOptimus_Feedback feedback;
} optimus_interfaces__action__ControlOptimus_FeedbackMessage;

// Struct for a sequence of optimus_interfaces__action__ControlOptimus_FeedbackMessage.
typedef struct optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence
{
  optimus_interfaces__action__ControlOptimus_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__STRUCT_H_
