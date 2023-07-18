// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pers_msgs:msg/NuevoUsuariomsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__STRUCT_HPP_
#define PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frame'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pers_msgs__msg__NuevoUsuariomsg __attribute__((deprecated))
#else
# define DEPRECATED__pers_msgs__msg__NuevoUsuariomsg __declspec(deprecated)
#endif

namespace pers_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NuevoUsuariomsg_
{
  using Type = NuevoUsuariomsg_<ContainerAllocator>;

  explicit NuevoUsuariomsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nombre = "";
    }
  }

  explicit NuevoUsuariomsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_alloc, _init),
    nombre(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nombre = "";
    }
  }

  // field types and members
  using _frame_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _frame_type frame;
  using _nombre_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nombre_type nombre;

  // setters for named parameter idiom
  Type & set__frame(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__nombre(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nombre = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pers_msgs__msg__NuevoUsuariomsg
    std::shared_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pers_msgs__msg__NuevoUsuariomsg
    std::shared_ptr<pers_msgs::msg::NuevoUsuariomsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NuevoUsuariomsg_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    if (this->nombre != other.nombre) {
      return false;
    }
    return true;
  }
  bool operator!=(const NuevoUsuariomsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NuevoUsuariomsg_

// alias to use template instance with default allocator
using NuevoUsuariomsg =
  pers_msgs::msg::NuevoUsuariomsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pers_msgs

#endif  // PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__STRUCT_HPP_
