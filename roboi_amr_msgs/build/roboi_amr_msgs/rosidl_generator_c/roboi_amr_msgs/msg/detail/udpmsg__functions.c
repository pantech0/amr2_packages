// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roboi_amr_msgs:msg/Udpmsg.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/msg/detail/udpmsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `st_fl`
// Member `st_fr`
// Member `st_rl`
// Member `st_rr`
#include "roboi_amr_msgs/msg/detail/angle_status__functions.h"

bool
roboi_amr_msgs__msg__Udpmsg__init(roboi_amr_msgs__msg__Udpmsg * msg)
{
  if (!msg) {
    return false;
  }
  // count
  // st_fl
  if (!roboi_amr_msgs__msg__AngleStatus__init(&msg->st_fl)) {
    roboi_amr_msgs__msg__Udpmsg__fini(msg);
    return false;
  }
  // st_fr
  if (!roboi_amr_msgs__msg__AngleStatus__init(&msg->st_fr)) {
    roboi_amr_msgs__msg__Udpmsg__fini(msg);
    return false;
  }
  // st_rl
  if (!roboi_amr_msgs__msg__AngleStatus__init(&msg->st_rl)) {
    roboi_amr_msgs__msg__Udpmsg__fini(msg);
    return false;
  }
  // st_rr
  if (!roboi_amr_msgs__msg__AngleStatus__init(&msg->st_rr)) {
    roboi_amr_msgs__msg__Udpmsg__fini(msg);
    return false;
  }
  return true;
}

void
roboi_amr_msgs__msg__Udpmsg__fini(roboi_amr_msgs__msg__Udpmsg * msg)
{
  if (!msg) {
    return;
  }
  // count
  // st_fl
  roboi_amr_msgs__msg__AngleStatus__fini(&msg->st_fl);
  // st_fr
  roboi_amr_msgs__msg__AngleStatus__fini(&msg->st_fr);
  // st_rl
  roboi_amr_msgs__msg__AngleStatus__fini(&msg->st_rl);
  // st_rr
  roboi_amr_msgs__msg__AngleStatus__fini(&msg->st_rr);
}

bool
roboi_amr_msgs__msg__Udpmsg__are_equal(const roboi_amr_msgs__msg__Udpmsg * lhs, const roboi_amr_msgs__msg__Udpmsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // st_fl
  if (!roboi_amr_msgs__msg__AngleStatus__are_equal(
      &(lhs->st_fl), &(rhs->st_fl)))
  {
    return false;
  }
  // st_fr
  if (!roboi_amr_msgs__msg__AngleStatus__are_equal(
      &(lhs->st_fr), &(rhs->st_fr)))
  {
    return false;
  }
  // st_rl
  if (!roboi_amr_msgs__msg__AngleStatus__are_equal(
      &(lhs->st_rl), &(rhs->st_rl)))
  {
    return false;
  }
  // st_rr
  if (!roboi_amr_msgs__msg__AngleStatus__are_equal(
      &(lhs->st_rr), &(rhs->st_rr)))
  {
    return false;
  }
  return true;
}

bool
roboi_amr_msgs__msg__Udpmsg__copy(
  const roboi_amr_msgs__msg__Udpmsg * input,
  roboi_amr_msgs__msg__Udpmsg * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  // st_fl
  if (!roboi_amr_msgs__msg__AngleStatus__copy(
      &(input->st_fl), &(output->st_fl)))
  {
    return false;
  }
  // st_fr
  if (!roboi_amr_msgs__msg__AngleStatus__copy(
      &(input->st_fr), &(output->st_fr)))
  {
    return false;
  }
  // st_rl
  if (!roboi_amr_msgs__msg__AngleStatus__copy(
      &(input->st_rl), &(output->st_rl)))
  {
    return false;
  }
  // st_rr
  if (!roboi_amr_msgs__msg__AngleStatus__copy(
      &(input->st_rr), &(output->st_rr)))
  {
    return false;
  }
  return true;
}

roboi_amr_msgs__msg__Udpmsg *
roboi_amr_msgs__msg__Udpmsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Udpmsg * msg = (roboi_amr_msgs__msg__Udpmsg *)allocator.allocate(sizeof(roboi_amr_msgs__msg__Udpmsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roboi_amr_msgs__msg__Udpmsg));
  bool success = roboi_amr_msgs__msg__Udpmsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roboi_amr_msgs__msg__Udpmsg__destroy(roboi_amr_msgs__msg__Udpmsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roboi_amr_msgs__msg__Udpmsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roboi_amr_msgs__msg__Udpmsg__Sequence__init(roboi_amr_msgs__msg__Udpmsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Udpmsg * data = NULL;

  if (size) {
    data = (roboi_amr_msgs__msg__Udpmsg *)allocator.zero_allocate(size, sizeof(roboi_amr_msgs__msg__Udpmsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roboi_amr_msgs__msg__Udpmsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roboi_amr_msgs__msg__Udpmsg__fini(&data[i - 1]);
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
roboi_amr_msgs__msg__Udpmsg__Sequence__fini(roboi_amr_msgs__msg__Udpmsg__Sequence * array)
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
      roboi_amr_msgs__msg__Udpmsg__fini(&array->data[i]);
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

roboi_amr_msgs__msg__Udpmsg__Sequence *
roboi_amr_msgs__msg__Udpmsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Udpmsg__Sequence * array = (roboi_amr_msgs__msg__Udpmsg__Sequence *)allocator.allocate(sizeof(roboi_amr_msgs__msg__Udpmsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roboi_amr_msgs__msg__Udpmsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roboi_amr_msgs__msg__Udpmsg__Sequence__destroy(roboi_amr_msgs__msg__Udpmsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roboi_amr_msgs__msg__Udpmsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roboi_amr_msgs__msg__Udpmsg__Sequence__are_equal(const roboi_amr_msgs__msg__Udpmsg__Sequence * lhs, const roboi_amr_msgs__msg__Udpmsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roboi_amr_msgs__msg__Udpmsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roboi_amr_msgs__msg__Udpmsg__Sequence__copy(
  const roboi_amr_msgs__msg__Udpmsg__Sequence * input,
  roboi_amr_msgs__msg__Udpmsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roboi_amr_msgs__msg__Udpmsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roboi_amr_msgs__msg__Udpmsg * data =
      (roboi_amr_msgs__msg__Udpmsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roboi_amr_msgs__msg__Udpmsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roboi_amr_msgs__msg__Udpmsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roboi_amr_msgs__msg__Udpmsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
