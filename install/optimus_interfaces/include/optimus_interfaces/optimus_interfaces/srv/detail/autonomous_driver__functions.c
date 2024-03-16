// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from optimus_interfaces:srv/AutonomousDriver.idl
// generated code does not contain a copyright notice
#include "optimus_interfaces/srv/detail/autonomous_driver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
optimus_interfaces__srv__AutonomousDriver_Request__init(optimus_interfaces__srv__AutonomousDriver_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  return true;
}

void
optimus_interfaces__srv__AutonomousDriver_Request__fini(optimus_interfaces__srv__AutonomousDriver_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
}

bool
optimus_interfaces__srv__AutonomousDriver_Request__are_equal(const optimus_interfaces__srv__AutonomousDriver_Request * lhs, const optimus_interfaces__srv__AutonomousDriver_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  return true;
}

bool
optimus_interfaces__srv__AutonomousDriver_Request__copy(
  const optimus_interfaces__srv__AutonomousDriver_Request * input,
  optimus_interfaces__srv__AutonomousDriver_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  return true;
}

optimus_interfaces__srv__AutonomousDriver_Request *
optimus_interfaces__srv__AutonomousDriver_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__srv__AutonomousDriver_Request * msg = (optimus_interfaces__srv__AutonomousDriver_Request *)allocator.allocate(sizeof(optimus_interfaces__srv__AutonomousDriver_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__srv__AutonomousDriver_Request));
  bool success = optimus_interfaces__srv__AutonomousDriver_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__srv__AutonomousDriver_Request__destroy(optimus_interfaces__srv__AutonomousDriver_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__srv__AutonomousDriver_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__srv__AutonomousDriver_Request__Sequence__init(optimus_interfaces__srv__AutonomousDriver_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__srv__AutonomousDriver_Request * data = NULL;

  if (size) {
    data = (optimus_interfaces__srv__AutonomousDriver_Request *)allocator.zero_allocate(size, sizeof(optimus_interfaces__srv__AutonomousDriver_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__srv__AutonomousDriver_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__srv__AutonomousDriver_Request__fini(&data[i - 1]);
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
optimus_interfaces__srv__AutonomousDriver_Request__Sequence__fini(optimus_interfaces__srv__AutonomousDriver_Request__Sequence * array)
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
      optimus_interfaces__srv__AutonomousDriver_Request__fini(&array->data[i]);
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

optimus_interfaces__srv__AutonomousDriver_Request__Sequence *
optimus_interfaces__srv__AutonomousDriver_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__srv__AutonomousDriver_Request__Sequence * array = (optimus_interfaces__srv__AutonomousDriver_Request__Sequence *)allocator.allocate(sizeof(optimus_interfaces__srv__AutonomousDriver_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__srv__AutonomousDriver_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__srv__AutonomousDriver_Request__Sequence__destroy(optimus_interfaces__srv__AutonomousDriver_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__srv__AutonomousDriver_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__srv__AutonomousDriver_Request__Sequence__are_equal(const optimus_interfaces__srv__AutonomousDriver_Request__Sequence * lhs, const optimus_interfaces__srv__AutonomousDriver_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__srv__AutonomousDriver_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__srv__AutonomousDriver_Request__Sequence__copy(
  const optimus_interfaces__srv__AutonomousDriver_Request__Sequence * input,
  optimus_interfaces__srv__AutonomousDriver_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__srv__AutonomousDriver_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__srv__AutonomousDriver_Request * data =
      (optimus_interfaces__srv__AutonomousDriver_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__srv__AutonomousDriver_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__srv__AutonomousDriver_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__srv__AutonomousDriver_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
optimus_interfaces__srv__AutonomousDriver_Response__init(optimus_interfaces__srv__AutonomousDriver_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
optimus_interfaces__srv__AutonomousDriver_Response__fini(optimus_interfaces__srv__AutonomousDriver_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
optimus_interfaces__srv__AutonomousDriver_Response__are_equal(const optimus_interfaces__srv__AutonomousDriver_Response * lhs, const optimus_interfaces__srv__AutonomousDriver_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
optimus_interfaces__srv__AutonomousDriver_Response__copy(
  const optimus_interfaces__srv__AutonomousDriver_Response * input,
  optimus_interfaces__srv__AutonomousDriver_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

optimus_interfaces__srv__AutonomousDriver_Response *
optimus_interfaces__srv__AutonomousDriver_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__srv__AutonomousDriver_Response * msg = (optimus_interfaces__srv__AutonomousDriver_Response *)allocator.allocate(sizeof(optimus_interfaces__srv__AutonomousDriver_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(optimus_interfaces__srv__AutonomousDriver_Response));
  bool success = optimus_interfaces__srv__AutonomousDriver_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
optimus_interfaces__srv__AutonomousDriver_Response__destroy(optimus_interfaces__srv__AutonomousDriver_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    optimus_interfaces__srv__AutonomousDriver_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
optimus_interfaces__srv__AutonomousDriver_Response__Sequence__init(optimus_interfaces__srv__AutonomousDriver_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__srv__AutonomousDriver_Response * data = NULL;

  if (size) {
    data = (optimus_interfaces__srv__AutonomousDriver_Response *)allocator.zero_allocate(size, sizeof(optimus_interfaces__srv__AutonomousDriver_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = optimus_interfaces__srv__AutonomousDriver_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        optimus_interfaces__srv__AutonomousDriver_Response__fini(&data[i - 1]);
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
optimus_interfaces__srv__AutonomousDriver_Response__Sequence__fini(optimus_interfaces__srv__AutonomousDriver_Response__Sequence * array)
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
      optimus_interfaces__srv__AutonomousDriver_Response__fini(&array->data[i]);
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

optimus_interfaces__srv__AutonomousDriver_Response__Sequence *
optimus_interfaces__srv__AutonomousDriver_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  optimus_interfaces__srv__AutonomousDriver_Response__Sequence * array = (optimus_interfaces__srv__AutonomousDriver_Response__Sequence *)allocator.allocate(sizeof(optimus_interfaces__srv__AutonomousDriver_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = optimus_interfaces__srv__AutonomousDriver_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
optimus_interfaces__srv__AutonomousDriver_Response__Sequence__destroy(optimus_interfaces__srv__AutonomousDriver_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    optimus_interfaces__srv__AutonomousDriver_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
optimus_interfaces__srv__AutonomousDriver_Response__Sequence__are_equal(const optimus_interfaces__srv__AutonomousDriver_Response__Sequence * lhs, const optimus_interfaces__srv__AutonomousDriver_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!optimus_interfaces__srv__AutonomousDriver_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
optimus_interfaces__srv__AutonomousDriver_Response__Sequence__copy(
  const optimus_interfaces__srv__AutonomousDriver_Response__Sequence * input,
  optimus_interfaces__srv__AutonomousDriver_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(optimus_interfaces__srv__AutonomousDriver_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    optimus_interfaces__srv__AutonomousDriver_Response * data =
      (optimus_interfaces__srv__AutonomousDriver_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!optimus_interfaces__srv__AutonomousDriver_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          optimus_interfaces__srv__AutonomousDriver_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!optimus_interfaces__srv__AutonomousDriver_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
