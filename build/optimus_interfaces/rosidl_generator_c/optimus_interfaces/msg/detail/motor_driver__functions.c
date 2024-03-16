// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from optimus_interfaces:msg/MotorDriver.idl
// generated code does not contain a copyright notice
#include "optimus_interfaces/msg/detail/motor_driver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_pwm_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
optimus_interfaces__msg__MotorDriver__init(optimus_interfaces__msg__MotorDriver * msg)
{
  if (!msg) {
    return false;
  }
  // motor_pwm_values
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->motor_pwm_values, 0)) {
    optimus_interfaces__msg__MotorDriver__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__msg__MotorDriver__fini(optimus_interfaces__msg__MotorDriver * msg)
{
  if (!msg) {
    return;
  }
  // motor_pwm_values
  rosidl_runtime_c__int64__Sequence__fini(&msg->motor_pwm_values);
}

bool
optimus_interfaces__msg__MotorDriver__are_equal(const optimus_interfaces__msg__MotorDriver * lhs, const optimus_interfaces__msg__MotorDriver * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_pwm_values
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->motor_pwm_values), &(rhs->motor_pwm_values)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__msg__MotorDriver__copy(
  const optimus_interfaces__msg__MotorDriver * input,
  optimus_interfaces__msg__MotorDriver * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_pwm_values
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->motor_pwm_values), &(output->motor_pwm_values)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__msg__MotorDriver *
optimus_interfaces__msg__MotorDriver__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__msg__MotorDriver * msg = (optimus_interfaces__msg__MotorDriver *)allocator.allocate(sizeof(optimus_interfaces__msg__MotorDriver), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__msg__MotorDriver));
  bool success = optimus_interfaces__msg__MotorDriver__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__msg__MotorDriver__destroy(optimus_interfaces__msg__MotorDriver * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__msg__MotorDriver__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__msg__MotorDriver__Sequence__init(optimus_interfaces__msg__MotorDriver__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__msg__MotorDriver * data = NULL;

  if (size) {
    data = (optimus_interfaces__msg__MotorDriver *)allocator.zero_allocate(size, sizeof(optimus_interfaces__msg__MotorDriver), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__msg__MotorDriver__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__msg__MotorDriver__fini(&data[i - 1]);
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
optimus_interfaces__msg__MotorDriver__Sequence__fini(optimus_interfaces__msg__MotorDriver__Sequence * array)
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
      optimus_interfaces__msg__MotorDriver__fini(&array->data[i]);
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

optimus_interfaces__msg__MotorDriver__Sequence *
optimus_interfaces__msg__MotorDriver__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__msg__MotorDriver__Sequence * array = (optimus_interfaces__msg__MotorDriver__Sequence *)allocator.allocate(sizeof(optimus_interfaces__msg__MotorDriver__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__msg__MotorDriver__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__msg__MotorDriver__Sequence__destroy(optimus_interfaces__msg__MotorDriver__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__msg__MotorDriver__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__msg__MotorDriver__Sequence__are_equal(const optimus_interfaces__msg__MotorDriver__Sequence * lhs, const optimus_interfaces__msg__MotorDriver__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__msg__MotorDriver__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__msg__MotorDriver__Sequence__copy(
  const optimus_interfaces__msg__MotorDriver__Sequence * input,
  optimus_interfaces__msg__MotorDriver__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__msg__MotorDriver);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__msg__MotorDriver * data =
      (optimus_interfaces__msg__MotorDriver *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__msg__MotorDriver__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__msg__MotorDriver__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__msg__MotorDriver__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
