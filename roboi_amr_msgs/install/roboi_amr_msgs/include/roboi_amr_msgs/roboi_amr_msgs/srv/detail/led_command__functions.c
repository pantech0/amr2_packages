// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roboi_amr_msgs:srv/LedCommand.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/srv/detail/led_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
roboi_amr_msgs__srv__LedCommand_Request__init(roboi_amr_msgs__srv__LedCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command_fl
  // command_fr
  // command_rl1
  // command_rl2
  // command_rl3
  // command_rr1
  // command_rr2
  // command_rr3
  return true;
}

void
roboi_amr_msgs__srv__LedCommand_Request__fini(roboi_amr_msgs__srv__LedCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command_fl
  // command_fr
  // command_rl1
  // command_rl2
  // command_rl3
  // command_rr1
  // command_rr2
  // command_rr3
}

bool
roboi_amr_msgs__srv__LedCommand_Request__are_equal(const roboi_amr_msgs__srv__LedCommand_Request * lhs, const roboi_amr_msgs__srv__LedCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command_fl
  if (lhs->command_fl != rhs->command_fl) {
    return false;
  }
  // command_fr
  if (lhs->command_fr != rhs->command_fr) {
    return false;
  }
  // command_rl1
  if (lhs->command_rl1 != rhs->command_rl1) {
    return false;
  }
  // command_rl2
  if (lhs->command_rl2 != rhs->command_rl2) {
    return false;
  }
  // command_rl3
  if (lhs->command_rl3 != rhs->command_rl3) {
    return false;
  }
  // command_rr1
  if (lhs->command_rr1 != rhs->command_rr1) {
    return false;
  }
  // command_rr2
  if (lhs->command_rr2 != rhs->command_rr2) {
    return false;
  }
  // command_rr3
  if (lhs->command_rr3 != rhs->command_rr3) {
    return false;
  }
  return true;
}

bool
roboi_amr_msgs__srv__LedCommand_Request__copy(
  const roboi_amr_msgs__srv__LedCommand_Request * input,
  roboi_amr_msgs__srv__LedCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command_fl
  output->command_fl = input->command_fl;
  // command_fr
  output->command_fr = input->command_fr;
  // command_rl1
  output->command_rl1 = input->command_rl1;
  // command_rl2
  output->command_rl2 = input->command_rl2;
  // command_rl3
  output->command_rl3 = input->command_rl3;
  // command_rr1
  output->command_rr1 = input->command_rr1;
  // command_rr2
  output->command_rr2 = input->command_rr2;
  // command_rr3
  output->command_rr3 = input->command_rr3;
  return true;
}

roboi_amr_msgs__srv__LedCommand_Request *
roboi_amr_msgs__srv__LedCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__srv__LedCommand_Request * msg = (roboi_amr_msgs__srv__LedCommand_Request *)allocator.allocate(sizeof(roboi_amr_msgs__srv__LedCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roboi_amr_msgs__srv__LedCommand_Request));
  bool success = roboi_amr_msgs__srv__LedCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roboi_amr_msgs__srv__LedCommand_Request__destroy(roboi_amr_msgs__srv__LedCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roboi_amr_msgs__srv__LedCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roboi_amr_msgs__srv__LedCommand_Request__Sequence__init(roboi_amr_msgs__srv__LedCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__srv__LedCommand_Request * data = NULL;

  if (size) {
    data = (roboi_amr_msgs__srv__LedCommand_Request *)allocator.zero_allocate(size, sizeof(roboi_amr_msgs__srv__LedCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roboi_amr_msgs__srv__LedCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roboi_amr_msgs__srv__LedCommand_Request__fini(&data[i - 1]);
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
roboi_amr_msgs__srv__LedCommand_Request__Sequence__fini(roboi_amr_msgs__srv__LedCommand_Request__Sequence * array)
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
      roboi_amr_msgs__srv__LedCommand_Request__fini(&array->data[i]);
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

roboi_amr_msgs__srv__LedCommand_Request__Sequence *
roboi_amr_msgs__srv__LedCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__srv__LedCommand_Request__Sequence * array = (roboi_amr_msgs__srv__LedCommand_Request__Sequence *)allocator.allocate(sizeof(roboi_amr_msgs__srv__LedCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roboi_amr_msgs__srv__LedCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roboi_amr_msgs__srv__LedCommand_Request__Sequence__destroy(roboi_amr_msgs__srv__LedCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roboi_amr_msgs__srv__LedCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roboi_amr_msgs__srv__LedCommand_Request__Sequence__are_equal(const roboi_amr_msgs__srv__LedCommand_Request__Sequence * lhs, const roboi_amr_msgs__srv__LedCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roboi_amr_msgs__srv__LedCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roboi_amr_msgs__srv__LedCommand_Request__Sequence__copy(
  const roboi_amr_msgs__srv__LedCommand_Request__Sequence * input,
  roboi_amr_msgs__srv__LedCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roboi_amr_msgs__srv__LedCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roboi_amr_msgs__srv__LedCommand_Request * data =
      (roboi_amr_msgs__srv__LedCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roboi_amr_msgs__srv__LedCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roboi_amr_msgs__srv__LedCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roboi_amr_msgs__srv__LedCommand_Request__copy(
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
roboi_amr_msgs__srv__LedCommand_Response__init(roboi_amr_msgs__srv__LedCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    roboi_amr_msgs__srv__LedCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
roboi_amr_msgs__srv__LedCommand_Response__fini(roboi_amr_msgs__srv__LedCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
roboi_amr_msgs__srv__LedCommand_Response__are_equal(const roboi_amr_msgs__srv__LedCommand_Response * lhs, const roboi_amr_msgs__srv__LedCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
roboi_amr_msgs__srv__LedCommand_Response__copy(
  const roboi_amr_msgs__srv__LedCommand_Response * input,
  roboi_amr_msgs__srv__LedCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

roboi_amr_msgs__srv__LedCommand_Response *
roboi_amr_msgs__srv__LedCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__srv__LedCommand_Response * msg = (roboi_amr_msgs__srv__LedCommand_Response *)allocator.allocate(sizeof(roboi_amr_msgs__srv__LedCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roboi_amr_msgs__srv__LedCommand_Response));
  bool success = roboi_amr_msgs__srv__LedCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roboi_amr_msgs__srv__LedCommand_Response__destroy(roboi_amr_msgs__srv__LedCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roboi_amr_msgs__srv__LedCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roboi_amr_msgs__srv__LedCommand_Response__Sequence__init(roboi_amr_msgs__srv__LedCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__srv__LedCommand_Response * data = NULL;

  if (size) {
    data = (roboi_amr_msgs__srv__LedCommand_Response *)allocator.zero_allocate(size, sizeof(roboi_amr_msgs__srv__LedCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roboi_amr_msgs__srv__LedCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roboi_amr_msgs__srv__LedCommand_Response__fini(&data[i - 1]);
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
roboi_amr_msgs__srv__LedCommand_Response__Sequence__fini(roboi_amr_msgs__srv__LedCommand_Response__Sequence * array)
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
      roboi_amr_msgs__srv__LedCommand_Response__fini(&array->data[i]);
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

roboi_amr_msgs__srv__LedCommand_Response__Sequence *
roboi_amr_msgs__srv__LedCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__srv__LedCommand_Response__Sequence * array = (roboi_amr_msgs__srv__LedCommand_Response__Sequence *)allocator.allocate(sizeof(roboi_amr_msgs__srv__LedCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roboi_amr_msgs__srv__LedCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roboi_amr_msgs__srv__LedCommand_Response__Sequence__destroy(roboi_amr_msgs__srv__LedCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roboi_amr_msgs__srv__LedCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roboi_amr_msgs__srv__LedCommand_Response__Sequence__are_equal(const roboi_amr_msgs__srv__LedCommand_Response__Sequence * lhs, const roboi_amr_msgs__srv__LedCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roboi_amr_msgs__srv__LedCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roboi_amr_msgs__srv__LedCommand_Response__Sequence__copy(
  const roboi_amr_msgs__srv__LedCommand_Response__Sequence * input,
  roboi_amr_msgs__srv__LedCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roboi_amr_msgs__srv__LedCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roboi_amr_msgs__srv__LedCommand_Response * data =
      (roboi_amr_msgs__srv__LedCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roboi_amr_msgs__srv__LedCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roboi_amr_msgs__srv__LedCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roboi_amr_msgs__srv__LedCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
