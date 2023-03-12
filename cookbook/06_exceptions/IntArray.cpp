#include "IntArray.h"
#include <stdexcept>

namespace cookbook {

IntArray::IntArray() {
  for (int i = 0; i < kSize; ++i) {
    m_data[i] = 0;
  }
}

int &IntArray::operator[](int index) {
  if (index < 0 || index >= kSize) {
    // throw custom exception
    throw BadIndexError{index};
    // throw custom exception + custom message
    // throw BadIndexError{index, "invalid index"};
    // throw standard exception
    // throw std::out_of_range{"bad index"};
  }

  return m_data[index];
}

int IntArray::operator[](int index) const {
  if (index < 0 || index >= kSize) {
    // throw custom exception
    throw BadIndexError{index};
    // throw standard exception
    // throw std::out_of_range{"bad index"};
  }

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