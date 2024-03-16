// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from optimus_interfaces:msg/UltraSonicRange.idl
// generated code does not contain a copyright notice
#include "optimus_interfaces/msg/detail/ultra_sonic_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

bool
optimus_interfaces__msg__UltraSonicRange__init(optimus_interfaces__msg__UltraSonicRange * msg)
{
  if (!msg) {
    return false;
  }
  // left_track_dist
  // right_track_dist
  // debug_message
  if (!rosidl_runtime_c__String__init(&msg->debug_message)) {
    optimus_interfaces__msg__UltraSonicRange__fini(msg);
    return false;
  }
  return true;
}

void
optimus_interfaces__msg__UltraSonicRange__fini(optimus_interfaces__msg__UltraSonicRange * msg)
{
  if (!msg) {
    return;
  }
  // left_track_dist
  // right_track_dist
  // debug_message
  rosidl_runtime_c__String__fini(&msg->debug_message);
}

bool
optimus_interfaces__msg__UltraSonicRange__are_equal(const optimus_interfaces__msg__UltraSonicRange * lhs, const optimus_interfaces__msg__UltraSonicRange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_track_dist
  if (lhs->left_track_dist != rhs->left_track_dist) {
    return false;
  }
  // right_track_dist
  if (lhs->right_track_dist != rhs->right_track_dist) {
    return false;
  }
  // debug_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->debug_message), &(rhs->debug_message)))
  {
    return false;
  }
  return true;
}

bool
optimus_interfaces__msg__UltraSonicRange__copy(
  const optimus_interfaces__msg__UltraSonicRange * input,
  optimus_interfaces__msg__UltraSonicRange * output)
{
  if (!input || !output) {
    return false;
  }
  // left_track_dist
  output->left_track_dist = input->left_track_dist;
  // right_track_dist
  output->right_track_dist = input->right_track_dist;
  // debug_message
  if (!rosidl_runtime_c__String__copy(
      &(input->debug_message), &(output->debug_message)))
  {
    return false;
  }
  return true;
}

optimus_interfaces__msg__UltraSonicRange *
optimus_interfaces__msg__UltraSonicRange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__msg__UltraSonicRange * msg = (optimus_interfaces__msg__UltraSonicRange *)allocator.allocate(sizeof(optimus_interfaces__msg__UltraSonicRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__msg__UltraSonicRange));
  bool success = optimus_interfaces__msg__UltraSonicRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__msg__UltraSonicRange__destroy(optimus_interfaces__msg__UltraSonicRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__msg__UltraSonicRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__msg__UltraSonicRange__Sequence__init(optimus_interfaces__msg__UltraSonicRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__msg__UltraSonicRange * data = NULL;

  if (size) {
    data = (optimus_interfaces__msg__UltraSonicRange *)allocator.zero_allocate(size, sizeof(optimus_interfaces__msg__UltraSonicRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__msg__UltraSonicRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__msg__UltraSonicRange__fini(&data[i - 1]);
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
optimus_interfaces__msg__UltraSonicRange__Sequence__fini(optimus_interfaces__msg__UltraSonicRange__Sequence * array)
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
      optimus_interfaces__msg__UltraSonicRange__fini(&array->data[i]);
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

optimus_interfaces__msg__UltraSonicRange__Sequence *
optimus_interfaces__msg__UltraSonicRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__msg__UltraSonicRange__Sequence * array = (optimus_interfaces__msg__UltraSonicRange__Sequence *)allocator.allocate(sizeof(optimus_interfaces__msg__UltraSonicRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__msg__UltraSonicRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__msg__UltraSonicRange__Sequence__destroy(optimus_interfaces__msg__UltraSonicRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__msg__UltraSonicRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__msg__UltraSonicRange__Sequence__are_equal(const optimus_interfaces__msg__UltraSonicRange__Sequence * lhs, const optimus_interfaces__msg__UltraSonicRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__msg__UltraSonicRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__msg__UltraSonicRange__Sequence__copy(
  const optimus_interfaces__msg__UltraSonicRange__Sequence * input,
  optimus_interfaces__msg__UltraSonicRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__msg__UltraSonicRange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__msg__UltraSonicRange * data =
      (optimus_interfaces__msg__UltraSonicRange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__msg__UltraSonicRange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__msg__UltraSonicRange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__msg__UltraSonicRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
