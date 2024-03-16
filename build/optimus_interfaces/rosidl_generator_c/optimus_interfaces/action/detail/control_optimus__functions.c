// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from optimus_interfaces:action/ControlOptimus.idl
// generated code does not contain a copyright notice
#include "optimus_interfaces/action/detail/control_optimus__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
optimus_interfaces__action__ControlOptimus_Goal__init(optimus_interfaces__action__ControlOptimus_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // left_motor_1
  // left_motor_2
  // right_motor_1
  // right_motor_2
  // is_autonomous
  // is_recording
  return true;
}

void
optimus_interfaces__action__ControlOptimus_Goal__fini(optimus_interfaces__action__ControlOptimus_Goal * msg)
{
  if (!msg) {
    return;
  }
  // left_motor_1
  // left_motor_2
  // right_motor_1
  // right_motor_2
  // is_autonomous
  // is_recording
}

bool
optimus_interfaces__action__ControlOptimus_Goal__are_equal(const optimus_interfaces__action__ControlOptimus_Goal * lhs, const optimus_interfaces__action__ControlOptimus_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_motor_1
  if (lhs->left_motor_1 != rhs->left_motor_1) {
    return false;
  }
  // left_motor_2
  if (lhs->left_motor_2 != rhs->left_motor_2) {
    return false;
  }
  // right_motor_1
  if (lhs->right_motor_1 != rhs->right_motor_1) {
    return false;
  }
  // right_motor_2
  if (lhs->right_motor_2 != rhs->right_motor_2) {
    return false;
  }
  // is_autonomous
  if (lhs->is_autonomous != rhs->is_autonomous) {
    return false;
  }
  // is_recording
  if (lhs->is_recording != rhs->is_recording) {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_Goal__copy(
  const optimus_interfaces__action__ControlOptimus_Goal * input,
  optimus_interfaces__action__ControlOptimus_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // left_motor_1
  output->left_motor_1 = input->left_motor_1;
  // left_motor_2
  output->left_motor_2 = input->left_motor_2;
  // right_motor_1
  output->right_motor_1 = input->right_motor_1;
  // right_motor_2
  output->right_motor_2 = input->right_motor_2;
  // is_autonomous
  output->is_autonomous = input->is_autonomous;
  // is_recording
  output->is_recording = input->is_recording;
  return true;
}

optimus_interfaces__action__ControlOptimus_Goal *
optimus_interfaces__action__ControlOptimus_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Goal * msg = (optimus_interfaces__action__ControlOptimus_Goal *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_Goal));
  bool success = optimus_interfaces__action__ControlOptimus_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_Goal__destroy(optimus_interfaces__action__ControlOptimus_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_Goal__Sequence__init(optimus_interfaces__action__ControlOptimus_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Goal * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_Goal *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_Goal__Sequence__fini(optimus_interfaces__action__ControlOptimus_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_Goal__Sequence *
optimus_interfaces__action__ControlOptimus_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Goal__Sequence * array = (optimus_interfaces__action__ControlOptimus_Goal__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_Goal__Sequence__destroy(optimus_interfaces__action__ControlOptimus_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_Goal__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_Goal__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_Goal__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_Goal__Sequence * input,
  optimus_interfaces__action__ControlOptimus_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_Goal * data =
      (optimus_interfaces__action__ControlOptimus_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
optimus_interfaces__action__ControlOptimus_Result__init(optimus_interfaces__action__ControlOptimus_Result * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    optimus_interfaces__action__ControlOptimus_Result__fini(msg);
    return false;
  }
  // is_autonomous
  return true;
}

void
optimus_interfaces__action__ControlOptimus_Result__fini(optimus_interfaces__action__ControlOptimus_Result * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // is_autonomous
}

bool
optimus_interfaces__action__ControlOptimus_Result__are_equal(const optimus_interfaces__action__ControlOptimus_Result * lhs, const optimus_interfaces__action__ControlOptimus_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // is_autonomous
  if (lhs->is_autonomous != rhs->is_autonomous) {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_Result__copy(
  const optimus_interfaces__action__ControlOptimus_Result * input,
  optimus_interfaces__action__ControlOptimus_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // is_autonomous
  output->is_autonomous = input->is_autonomous;
  return true;
}

optimus_interfaces__action__ControlOptimus_Result *
optimus_interfaces__action__ControlOptimus_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Result * msg = (optimus_interfaces__action__ControlOptimus_Result *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_Result));
  bool success = optimus_interfaces__action__ControlOptimus_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_Result__destroy(optimus_interfaces__action__ControlOptimus_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_Result__Sequence__init(optimus_interfaces__action__ControlOptimus_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Result * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_Result *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_Result__Sequence__fini(optimus_interfaces__action__ControlOptimus_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_Result__Sequence *
optimus_interfaces__action__ControlOptimus_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Result__Sequence * array = (optimus_interfaces__action__ControlOptimus_Result__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_Result__Sequence__destroy(optimus_interfaces__action__ControlOptimus_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_Result__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_Result__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_Result__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_Result__Sequence * input,
  optimus_interfaces__action__ControlOptimus_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_Result * data =
      (optimus_interfaces__action__ControlOptimus_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
optimus_interfaces__action__ControlOptimus_Feedback__init(optimus_interfaces__action__ControlOptimus_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    optimus_interfaces__action__ControlOptimus_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__action__ControlOptimus_Feedback__fini(optimus_interfaces__action__ControlOptimus_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
optimus_interfaces__action__ControlOptimus_Feedback__are_equal(const optimus_interfaces__action__ControlOptimus_Feedback * lhs, const optimus_interfaces__action__ControlOptimus_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_Feedback__copy(
  const optimus_interfaces__action__ControlOptimus_Feedback * input,
  optimus_interfaces__action__ControlOptimus_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__action__ControlOptimus_Feedback *
optimus_interfaces__action__ControlOptimus_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Feedback * msg = (optimus_interfaces__action__ControlOptimus_Feedback *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_Feedback));
  bool success = optimus_interfaces__action__ControlOptimus_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_Feedback__destroy(optimus_interfaces__action__ControlOptimus_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__init(optimus_interfaces__action__ControlOptimus_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Feedback * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_Feedback *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__fini(optimus_interfaces__action__ControlOptimus_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_Feedback__Sequence *
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_Feedback__Sequence * array = (optimus_interfaces__action__ControlOptimus_Feedback__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__destroy(optimus_interfaces__action__ControlOptimus_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_Feedback__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_Feedback__Sequence * input,
  optimus_interfaces__action__ControlOptimus_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_Feedback * data =
      (optimus_interfaces__action__ControlOptimus_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__functions.h"

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__init(optimus_interfaces__action__ControlOptimus_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!optimus_interfaces__action__ControlOptimus_Goal__init(&msg->goal)) {
    optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  optimus_interfaces__action__ControlOptimus_Goal__fini(&msg->goal);
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Request * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!optimus_interfaces__action__ControlOptimus_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Request * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!optimus_interfaces__action__ControlOptimus_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__action__ControlOptimus_SendGoal_Request *
optimus_interfaces__action__ControlOptimus_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_SendGoal_Request * msg = (optimus_interfaces__action__ControlOptimus_SendGoal_Request *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Request));
  bool success = optimus_interfaces__action__ControlOptimus_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__init(optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_SendGoal_Request * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_SendGoal_Request *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence *
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * array = (optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_SendGoal_Request * data =
      (optimus_interfaces__action__ControlOptimus_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__init(optimus_interfaces__action__ControlOptimus_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Response * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Response * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__action__ControlOptimus_SendGoal_Response *
optimus_interfaces__action__ControlOptimus_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_SendGoal_Response * msg = (optimus_interfaces__action__ControlOptimus_SendGoal_Response *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Response));
  bool success = optimus_interfaces__action__ControlOptimus_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__init(optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_SendGoal_Response * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_SendGoal_Response *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence *
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * array = (optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_SendGoal_Response * data =
      (optimus_interfaces__action__ControlOptimus_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__init(optimus_interfaces__action__ControlOptimus_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    optimus_interfaces__action__ControlOptimus_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Request__fini(optimus_interfaces__action__ControlOptimus_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Request * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Request * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__action__ControlOptimus_GetResult_Request *
optimus_interfaces__action__ControlOptimus_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_GetResult_Request * msg = (optimus_interfaces__action__ControlOptimus_GetResult_Request *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Request));
  bool success = optimus_interfaces__action__ControlOptimus_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Request__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__init(optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_GetResult_Request * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_GetResult_Request *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__fini(optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence *
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * array = (optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_GetResult_Request * data =
      (optimus_interfaces__action__ControlOptimus_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__functions.h"

bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__init(optimus_interfaces__action__ControlOptimus_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!optimus_interfaces__action__ControlOptimus_Result__init(&msg->result)) {
    optimus_interfaces__action__ControlOptimus_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Response__fini(optimus_interfaces__action__ControlOptimus_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  optimus_interfaces__action__ControlOptimus_Result__fini(&msg->result);
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Response * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!optimus_interfaces__action__ControlOptimus_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Response * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!optimus_interfaces__action__ControlOptimus_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__action__ControlOptimus_GetResult_Response *
optimus_interfaces__action__ControlOptimus_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_GetResult_Response * msg = (optimus_interfaces__action__ControlOptimus_GetResult_Response *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Response));
  bool success = optimus_interfaces__action__ControlOptimus_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Response__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__init(optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_GetResult_Response * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_GetResult_Response *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__fini(optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence *
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * array = (optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_GetResult_Response * data =
      (optimus_interfaces__action__ControlOptimus_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__functions.h"

bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__init(optimus_interfaces__action__ControlOptimus_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!optimus_interfaces__action__ControlOptimus_Feedback__init(&msg->feedback)) {
    optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(optimus_interfaces__action__ControlOptimus_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  optimus_interfaces__action__ControlOptimus_Feedback__fini(&msg->feedback);
}

bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__are_equal(const optimus_interfaces__action__ControlOptimus_FeedbackMessage * lhs, const optimus_interfaces__action__ControlOptimus_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!optimus_interfaces__action__ControlOptimus_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__copy(
  const optimus_interfaces__action__ControlOptimus_FeedbackMessage * input,
  optimus_interfaces__action__ControlOptimus_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!optimus_interfaces__action__ControlOptimus_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__action__ControlOptimus_FeedbackMessage *
optimus_interfaces__action__ControlOptimus_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_FeedbackMessage * msg = (optimus_interfaces__action__ControlOptimus_FeedbackMessage *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__action__ControlOptimus_FeedbackMessage));
  bool success = optimus_interfaces__action__ControlOptimus_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__destroy(optimus_interfaces__action__ControlOptimus_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__init(optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_FeedbackMessage * data = NULL;

  if (size) {
    data = (optimus_interfaces__action__ControlOptimus_FeedbackMessage *)allocator.zero_allocate(size, sizeof(optimus_interfaces__action__ControlOptimus_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__action__ControlOptimus_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__fini(optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence *
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * array = (optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence *)allocator.allocate(sizeof(optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__destroy(optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * input,
  optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__action__ControlOptimus_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__action__ControlOptimus_FeedbackMessage * data =
      (optimus_interfaces__action__ControlOptimus_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__action__ControlOptimus_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__action__ControlOptimus_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
