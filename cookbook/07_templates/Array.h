#pragma once

#include <cassert>
#include <iostream>

namespace cookbook {

template <class T, unsigned int N>
class Array {
private:
  T m_data[N];

public:
  T &operator[](int index) {
    assert(index >= 0 && index < N);

    return m_data[index];
  }

  T operator[](int index) const {
    assert(index >= 0 && index < N);

    return m_data[index];
  }

  friend std::ostream &operator<<(std::ostream &os, const Array &array) {
    std::cout << "[";
    for (int i = 0; i < N; ++i) {
      std::cout << " " << array[i];
    }
    std::cout << "]";

    return os;
  }
};

} // namespace cookbook
