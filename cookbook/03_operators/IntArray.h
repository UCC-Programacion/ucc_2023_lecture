#pragma once

#include <iostream>

namespace cookbook {

class IntArray {
private:
  static const int kSize = 5;

  int m_data[kSize];

public:
  IntArray();

  // operators
  IntArray operator+(const IntArray &);
  int &operator[](int);
  int operator[](int) const;

  friend std::ostream &operator<<(std::ostream &, const IntArray &);
};

} // namespace cookbook
