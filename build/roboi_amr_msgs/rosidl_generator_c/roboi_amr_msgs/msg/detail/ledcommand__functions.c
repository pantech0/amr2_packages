// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roboi_amr_msgs:msg/Ledcommand.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/msg/detail/ledcommand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roboi_amr_msgs__msg__Ledcommand__init(roboi_amr_msgs__msg__Ledcommand * msg)
{
  if (!msg) {
    return false;
  }
  // target
  // action
  // blinkrate
  return true;
}

void
roboi_amr_msgs__msg__Ledcommand__fini(roboi_amr_msgs__msg__Ledcommand * msg)
{
  if (!msg) {
    return;
  }
  // target
  // action
  // blinkrate
}

bool
roboi_amr_msgs__msg__Ledcommand__are_equal(const roboi_amr_msgs__msg__Ledcommand * lhs, const roboi_amr_msgs__msg__Ledcommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // blinkrate
  if (lhs->blinkrate != rhs->blinkrate) {
    return false;
  }
  return true;
}

bool
roboi_amr_msgs__msg__Ledcommand__copy(
  const roboi_amr_msgs__msg__Ledcommand * input,
  roboi_amr_msgs__msg__Ledcommand * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  output->target = input->target;
  // action
  output->action = input->action;
  // blinkrate
  output->blinkrate = input->blinkrate;
  return true;
}

roboi_amr_msgs__msg__Ledcommand *
roboi_amr_msgs__msg__Ledcommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Ledcommand * msg = (roboi_amr_msgs__msg__Ledcommand *)allocator.allocate(sizeof(roboi_amr_msgs__msg__Ledcommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roboi_amr_msgs__msg__Ledcommand));
  bool success = roboi_amr_msgs__msg__Ledcommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roboi_amr_msgs__msg__Ledcommand__destroy(roboi_amr_msgs__msg__Ledcommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roboi_amr_msgs__msg__Ledcommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roboi_amr_msgs__msg__Ledcommand__Sequence__init(roboi_amr_msgs__msg__Ledcommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Ledcommand * data = NULL;

  if (size) {
    data = (roboi_amr_msgs__msg__Ledcommand *)allocator.zero_allocate(size, sizeof(roboi_amr_msgs__msg__Ledcommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roboi_amr_msgs__msg__Ledcommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roboi_amr_msgs__msg__Ledcommand__fini(&data[i - 1]);
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
roboi_amr_msgs__msg__Ledcommand__Sequence__fini(roboi_amr_msgs__msg__Ledcommand__Sequence * array)
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
      roboi_amr_msgs__msg__Ledcommand__fini(&array->data[i]);
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

roboi_amr_msgs__msg__Ledcommand__Sequence *
roboi_amr_msgs__msg__Ledcommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Ledcommand__Sequence * array = (roboi_amr_msgs__msg__Ledcommand__Sequence *)allocator.allocate(sizeof(roboi_amr_msgs__msg__Ledcommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roboi_amr_msgs__msg__Ledcommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roboi_amr_msgs__msg__Ledcommand__Sequence__destroy(roboi_amr_msgs__msg__Ledcommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roboi_amr_msgs__msg__Ledcommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roboi_amr_msgs__msg__Ledcommand__Sequence__are_equal(const roboi_amr_msgs__msg__Ledcommand__Sequence * lhs, const roboi_amr_msgs__msg__Ledcommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roboi_amr_msgs__msg__Ledcommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roboi_amr_msgs__msg__Ledcommand__Sequence__copy(
  const roboi_amr_msgs__msg__Ledcommand__Sequence * input,
  roboi_amr_msgs__msg__Ledcommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roboi_amr_msgs__msg__Ledcommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roboi_amr_msgs__msg__Ledcommand * data =
      (roboi_amr_msgs__msg__Ledcommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roboi_amr_msgs__msg__Ledcommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roboi_amr_msgs__msg__Ledcommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roboi_amr_msgs__msg__Ledcommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}