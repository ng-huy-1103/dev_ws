// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interface:msg/Servo.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO__STRUCT_HPP_
#define MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interface__msg__Servo __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interface__msg__Servo __declspec(deprecated)
#endif

namespace my_robot_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Servo_
{
  using Type = Servo_<ContainerAllocator>;

  explicit Servo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 2>::iterator, int64_t>(this->servo_states.begin(), this->servo_states.end(), 0ll);
    }
  }

  explicit Servo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : servo_states(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 2>::iterator, int64_t>(this->servo_states.begin(), this->servo_states.end(), 0ll);
    }
  }

  // field types and members
  using _servo_states_type =
    std::array<int64_t, 2>;
  _servo_states_type servo_states;

  // setters for named parameter idiom
  Type & set__servo_states(
    const std::array<int64_t, 2> & _arg)
  {
    this->servo_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interface::msg::Servo_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interface::msg::Servo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interface::msg::Servo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interface::msg::Servo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interface::msg::Servo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interface::msg::Servo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interface::msg::Servo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interface::msg::Servo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interface::msg::Servo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interface::msg::Servo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interface__msg__Servo
    std::shared_ptr<my_robot_interface::msg::Servo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interface__msg__Servo
    std::shared_ptr<my_robot_interface::msg::Servo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Servo_ & other) const
  {
    if (this->servo_states != other.servo_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const Servo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Servo_

// alias to use template instance with default allocator
using Servo =
  my_robot_interface::msg::Servo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interface

#endif  // MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO__STRUCT_HPP_
