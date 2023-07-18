// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pers_msgs:msg/Caramsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__CARAMSG__STRUCT_HPP_
#define PERS_MSGS__MSG__DETAIL__CARAMSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'caras'
// Member 'frame'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pers_msgs__msg__Caramsg __attribute__((deprecated))
#else
# define DEPRECATED__pers_msgs__msg__Caramsg __declspec(deprecated)
#endif

namespace pers_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Caramsg_
{
  using Type = Caramsg_<ContainerAllocator>;

  explicit Caramsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_init)
  {
    (void)_init;
  }

  explicit Caramsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _caras_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _caras_type caras;
  using _frame_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _frame_type frame;
  using _top_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _top_type top;
  using _right_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _right_type right;
  using _bottom_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _bottom_type bottom;
  using _left_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _left_type left;
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;

  // setters for named parameter idiom
  Type & set__caras(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->caras = _arg;
    return *this;
  }
  Type & set__frame(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__top(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->top = _arg;
    return *this;
  }
  Type & set__right(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__bottom(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->bottom = _arg;
    return *this;
  }
  Type & set__left(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pers_msgs::msg::Caramsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const pers_msgs::msg::Caramsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pers_msgs::msg::Caramsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pers_msgs::msg::Caramsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pers_msgs__msg__Caramsg
    std::shared_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pers_msgs__msg__Caramsg
    std::shared_ptr<pers_msgs::msg::Caramsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Caramsg_ & other) const
  {
    if (this->caras != other.caras) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->top != other.top) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->bottom != other.bottom) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->names != other.names) {
      return false;
    }
    return true;
  }
  bool operator!=(const Caramsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Caramsg_

// alias to use template instance with default allocator
using Caramsg =
  pers_msgs::msg::Caramsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pers_msgs

#endif  // PERS_MSGS__MSG__DETAIL__CARAMSG__STRUCT_HPP_
