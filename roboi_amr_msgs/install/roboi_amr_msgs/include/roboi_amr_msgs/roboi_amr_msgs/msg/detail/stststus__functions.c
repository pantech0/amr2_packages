// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roboi_amr_msgs:msg/Stststus.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/msg/detail/stststus__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roboi_amr_msgs__msg__Stststus__init(roboi_amr_msgs__msg__Stststus * msg)
{
  if (!msg) {
    return false;
  }
  // isberrorall
  // isblimitvverpositive
  // isblimitovernegative
  // isbovercurrent
  // isboverheat
  // isbemergencystop
  // isboriginreturn
  // isbservoon
  // isbalarmreset
  // isbpositiontableend
  // isbmotionmoving
  // isbmotionpause
  // isboverload
  // isbmotorstop
  // cmdpos
  // actpos
  // actposerr
  // actvel
  // positemno
  return true;
}

void
roboi_amr_msgs__msg__Stststus__fini(roboi_amr_msgs__msg__Stststus * msg)
{
  if (!msg) {
    return;
  }
  // isberrorall
  // isblimitvverpositive
  // isblimitovernegative
  // isbovercurrent
  // isboverheat
  // isbemergencystop
  // isboriginreturn
  // isbservoon
  // isbalarmreset
  // isbpositiontableend
  // isbmotionmoving
  // isbmotionpause
  // isboverload
  // isbmotorstop
  // cmdpos
  // actpos
  // actposerr
  // actvel
  // positemno
}

bool
roboi_amr_msgs__msg__Stststus__are_equal(const roboi_amr_msgs__msg__Stststus * lhs, const roboi_amr_msgs__msg__Stststus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // isberrorall
  if (lhs->isberrorall != rhs->isberrorall) {
    return false;
  }
  // isblimitvverpositive
  if (lhs->isblimitvverpositive != rhs->isblimitvverpositive) {
    return false;
  }
  // isblimitovernegative
  if (lhs->isblimitovernegative != rhs->isblimitovernegative) {
    return false;
  }
  // isbovercurrent
  if (lhs->isbovercurrent != rhs->isbovercurrent) {
    return false;
  }
  // isboverheat
  if (lhs->isboverheat != rhs->isboverheat) {
    return false;
  }
  // isbemergencystop
  if (lhs->isbemergencystop != rhs->isbemergencystop) {
    return false;
  }
  // isboriginreturn
  if (lhs->isboriginreturn != rhs->isboriginreturn) {
    return false;
  }
  // isbservoon
  if (lhs->isbservoon != rhs->isbservoon) {
    return false;
  }
  // isbalarmreset
  if (lhs->isbalarmreset != rhs->isbalarmreset) {
    return false;
  }
  // isbpositiontableend
  if (lhs->isbpositiontableend != rhs->isbpositiontableend) {
    return false;
  }
  // isbmotionmoving
  if (lhs->isbmotionmoving != rhs->isbmotionmoving) {
    return false;
  }
  // isbmotionpause
  if (lhs->isbmotionpause != rhs->isbmotionpause) {
    return false;
  }
  // isboverload
  if (lhs->isboverload != rhs->isboverload) {
    return false;
  }
  // isbmotorstop
  if (lhs->isbmotorstop != rhs->isbmotorstop) {
    return false;
  }
  // cmdpos
  if (lhs->cmdpos != rhs->cmdpos) {
    return false;
  }
  // actpos
  if (lhs->actpos != rhs->actpos) {
    return false;
  }
  // actposerr
  if (lhs->actposerr != rhs->actposerr) {
    return false;
  }
  // actvel
  if (lhs->actvel != rhs->actvel) {
    return false;
  }
  // positemno
  if (lhs->positemno != rhs->positemno) {
    return false;
  }
  return true;
}

bool
roboi_amr_msgs__msg__Stststus__copy(
  const roboi_amr_msgs__msg__Stststus * input,
  roboi_amr_msgs__msg__Stststus * output)
{
  if (!input || !output) {
    return false;
  }
  // isberrorall
  output->isberrorall = input->isberrorall;
  // isblimitvverpositive
  output->isblimitvverpositive = input->isblimitvverpositive;
  // isblimitovernegative
  output->isblimitovernegative = input->isblimitovernegative;
  // isbovercurrent
  output->isbovercurrent = input->isbovercurrent;
  // isboverheat
  output->isboverheat = input->isboverheat;
  // isbemergencystop
  output->isbemergencystop = input->isbemergencystop;
  // isboriginreturn
  output->isboriginreturn = input->isboriginreturn;
  // isbservoon
  output->isbservoon = input->isbservoon;
  // isbalarmreset
  output->isbalarmreset = input->isbalarmreset;
  // isbpositiontableend
  output->isbpositiontableend = input->isbpositiontableend;
  // isbmotionmoving
  output->isbmotionmoving = input->isbmotionmoving;
  // isbmotionpause
  output->isbmotionpause = input->isbmotionpause;
  // isboverload
  output->isboverload = input->isboverload;
  // isbmotorstop
  output->isbmotorstop = input->isbmotorstop;
  // cmdpos
  output->cmdpos = input->cmdpos;
  // actpos
  output->actpos = input->actpos;
  // actposerr
  output->actposerr = input->actposerr;
  // actvel
  output->actvel = input->actvel;
  // positemno
  output->positemno = input->positemno;
  return true;
}

roboi_amr_msgs__msg__Stststus *
roboi_amr_msgs__msg__Stststus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Stststus * msg = (roboi_amr_msgs__msg__Stststus *)allocator.allocate(sizeof(roboi_amr_msgs__msg__Stststus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roboi_amr_msgs__msg__Stststus));
  bool success = roboi_amr_msgs__msg__Stststus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roboi_amr_msgs__msg__Stststus__destroy(roboi_amr_msgs__msg__Stststus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roboi_amr_msgs__msg__Stststus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roboi_amr_msgs__msg__Stststus__Sequence__init(roboi_amr_msgs__msg__Stststus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Stststus * data = NULL;

  if (size) {
    data = (roboi_amr_msgs__msg__Stststus *)allocator.zero_allocate(size, sizeof(roboi_amr_msgs__msg__Stststus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roboi_amr_msgs__msg__Stststus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roboi_amr_msgs__msg__Stststus__fini(&data[i - 1]);
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
roboi_amr_msgs__msg__Stststus__Sequence__fini(roboi_amr_msgs__msg__Stststus__Sequence * array)
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
      roboi_amr_msgs__msg__Stststus__fini(&array->data[i]);
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

roboi_amr_msgs__msg__Stststus__Sequence *
roboi_amr_msgs__msg__Stststus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboi_amr_msgs__msg__Stststus__Sequence * array = (roboi_amr_msgs__msg__Stststus__Sequence *)allocator.allocate(sizeof(roboi_amr_msgs__msg__Stststus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roboi_amr_msgs__msg__Stststus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roboi_amr_msgs__msg__Stststus__Sequence__destroy(roboi_amr_msgs__msg__Stststus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roboi_amr_msgs__msg__Stststus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roboi_amr_msgs__msg__Stststus__Sequence__are_equal(const roboi_amr_msgs__msg__Stststus__Sequence * lhs, const roboi_amr_msgs__msg__Stststus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roboi_amr_msgs__msg__Stststus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roboi_amr_msgs__msg__Stststus__Sequence__copy(
  const roboi_amr_msgs__msg__Stststus__Sequence * input,
  roboi_amr_msgs__msg__Stststus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roboi_amr_msgs__msg__Stststus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roboi_amr_msgs__msg__Stststus * data =
      (roboi_amr_msgs__msg__Stststus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roboi_amr_msgs__msg__Stststus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roboi_amr_msgs__msg__Stststus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roboi_amr_msgs__msg__Stststus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
