#include "DynamicIntList.h"
#include <cassert>

namespace cookbook {

DynamicIntList::DynamicIntList(std::size_t size)
    : m_size{size}, m_data{size != 0 ? new int[size] : nullptr} {
  for (int i = 0; i < size; ++i) {
    m_data[i] = i;
  }
}

DynamicIntList::~DynamicIntList() { delete[] m_data; }

DynamicIntList::DynamicIntList(const DynamicIntList &other)
    : m_size{other.m_size}, m_data{other.m_size != 0 ? new int[other.m_size]
                                                     : nullptr} {
  std::copy(other.m_data, other.m_data + other.m_size, m_data);
}

DynamicIntList &DynamicIntList::operator=(DynamicIntList other) {
  swap(other);

  return *this;
}

// DynamicIntList &DynamicIntList::operator=(const DynamicIntList &other) {
//   if (this != &other) { // protect against invalid self-assignment
//     // 1: allocate new memory and copy the elements
//     int *new_data = new int[other.m_size];
//     std::copy(other.m_data, other.m_data + other.m_size, new_data);
//
//     // 2: deallocate old memory
//     delete[] m_data;
//
//     // 3: assign the new memory to the object
//     m_data = new_data;
//     m_size = other.m_size;
//   }
//   return *this;
// }

void DynamicIntList::swap(DynamicIntList &other) {
  std::swap(m_data, other.m_data);
  std::swap(m_size, other.m_size);
}

bool DynamicIntList::operator==(const DynamicIntList &other) {
  if (m_size != other.m_size) {
    return false;
  }

  for (int i = 0; i < m_size; ++i) {
    if (m_data[i] != other.m_data[i]) {
      return false;
    }
  }

  return true;
}

int &DynamicIntList::operator[](int index) {
  assert(index >= 0 && index < m_size);

  return m_data[index];
}

int DynamicIntList::operator[](int index) const {
  assert(index >= 0 && index < m_size);

  return m_data[index];
}

std::ostream &operator<<(std::ostream &os,
                         const DynamicIntList &dynamic_int_list) {
  std::cout << "[";
  for (int i = 0; i < dynamic_int_list.m_size; ++i) {
    std::cout << " " << dynamic_int_list.m_data[i];
  }
  std::cout << "]";

  return os;
}

} // namespace cookbook