// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_interfaces:msg/Float64.idl
// generated code does not contain a copyright notice
#include "aruco_interfaces/msg/detail/float64__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aruco_interfaces__msg__Float64__init(aruco_interfaces__msg__Float64 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
aruco_interfaces__msg__Float64__fini(aruco_interfaces__msg__Float64 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
aruco_interfaces__msg__Float64__are_equal(const aruco_interfaces__msg__Float64 * lhs, const aruco_interfaces__msg__Float64 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
aruco_interfaces__msg__Float64__copy(
  const aruco_interfaces__msg__Float64 * input,
  aruco_interfaces__msg__Float64 * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

aruco_interfaces__msg__Float64 *
aruco_interfaces__msg__Float64__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__Float64 * msg = (aruco_interfaces__msg__Float64 *)allocator.allocate(sizeof(aruco_interfaces__msg__Float64), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_interfaces__msg__Float64));
  bool success = aruco_interfaces__msg__Float64__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_interfaces__msg__Float64__destroy(aruco_interfaces__msg__Float64 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_interfaces__msg__Float64__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_interfaces__msg__Float64__Sequence__init(aruco_interfaces__msg__Float64__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__Float64 * data = NULL;

  if (size) {
    data = (aruco_interfaces__msg__Float64 *)allocator.zero_allocate(size, sizeof(aruco_interfaces__msg__Float64), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_interfaces__msg__Float64__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_interfaces__msg__Float64__fini(&data[i - 1]);
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
aruco_interfaces__msg__Float64__Sequence__fini(aruco_interfaces__msg__Float64__Sequence * array)
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
      aruco_interfaces__msg__Float64__fini(&array->data[i]);
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

aruco_interfaces__msg__Float64__Sequence *
aruco_interfaces__msg__Float64__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__Float64__Sequence * array = (aruco_interfaces__msg__Float64__Sequence *)allocator.allocate(sizeof(aruco_interfaces__msg__Float64__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_interfaces__msg__Float64__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_interfaces__msg__Float64__Sequence__destroy(aruco_interfaces__msg__Float64__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_interfaces__msg__Float64__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_interfaces__msg__Float64__Sequence__are_equal(const aruco_interfaces__msg__Float64__Sequence * lhs, const aruco_interfaces__msg__Float64__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_interfaces__msg__Float64__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_interfaces__msg__Float64__Sequence__copy(
  const aruco_interfaces__msg__Float64__Sequence * input,
  aruco_interfaces__msg__Float64__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_interfaces__msg__Float64);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_interfaces__msg__Float64 * data =
      (aruco_interfaces__msg__Float64 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_interfaces__msg__Float64__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_interfaces__msg__Float64__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_interfaces__msg__Float64__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}