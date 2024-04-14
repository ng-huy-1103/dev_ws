// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interface:msg/ServoState.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__STRUCT_H_
#define MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ServoState in the package my_robot_interface.
typedef struct my_robot_interface__msg__ServoState
{
  int8_t servo_states[2];
} my_robot_interface__msg__ServoState;

// Struct for a sequence of my_robot_interface__msg__ServoState.
typedef struct my_robot_interface__msg__ServoState__Sequence
{
  my_robot_interface__msg__ServoState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interface__msg__ServoState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__STRUCT_H_
