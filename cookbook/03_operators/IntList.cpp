#include "IntList.h"
#include <cassert>

namespace cookbook {

IntList::IntList() {
  for (int i = 0; i < SIZE; ++i) {
    m_data[i] = 0;
  }
}

IntList IntList::operator+(const IntList &other) {
  IntList result;

  for (int i = 0; i < SIZE; ++i) {
    result[i] = m_data[i] + other[i];
  }

  return result;
}

int &IntList::operator[](int index) {
  assert(index >= 0 && index < SIZE);

  return m_data[index];
}

int IntList::operator[](int index) const {
  assert(index >= 0 && index < SIZE);

  return m_data[index];
}

std::ostream &operator<<(std::ostream &os, const IntList &int_list) {
  std::cout << "[";
  for (int i = 0; i < int_list.SIZE; ++i) {
    std::cout << " " << int_list[i];
  }
  std::cout << "]";

  return os;
}

} // namespace cookbook