#include "IntArray.h"
#include <cassert>

namespace cookbook {

IntArray::IntArray() {
  for (int i = 0; i < kSize; ++i) {
    m_data[i] = 0;
  }
}

IntArray IntArray::operator+(const IntArray &other) {
  IntArray result;

  for (int i = 0; i < kSize; ++i) {
    result[i] = m_data[i] + other[i];
  }

  return result;
}

int &IntArray::operator[](int index) {
  assert(index >= 0 && index < kSize);

  return m_data[index];
}

int IntArray::operator[](int index) const {
  assert(index >= 0 && index < kSize);

  return m_data[index];
}

std::ostream &operator<<(std::ostream &os, const IntArray &int_list) {
  std::cout << "[";
  for (int i = 0; i < int_list.kSize; ++i) {
    std::cout << " " << int_list[i];
  }
  std::cout << "]";

  return os;
}

} // namespace cookbook