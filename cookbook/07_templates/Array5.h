#pragma once

#include <cassert>
#include <iostream>

namespace cookbook {

template <class T> class Array5 {
private:
  static const int kSize = 5;

  T m_data[kSize];

public:
  T &operator[](int index) {
    assert(index >= 0 && index < kSize);

    return m_data[index];
  }

  T operator[](int index) const {
    assert(index >= 0 && index < kSize);

    return m_data[index];
  }

  friend std::ostream &operator<<(std::ostream &os, const Array5 &array) {
    std::cout << "[";
    for (int i = 0; i < kSize; ++i) {
      std::cout << " " << array[i];
    }
    std::cout << "]";

    return os;
  }
};

} // namespace cookbook
