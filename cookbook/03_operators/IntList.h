#pragma once

#include <iostream>

namespace cookbook {

class IntList {
private:
  static const int SIZE = 5;

  int m_data[SIZE];

public:
  IntList();

  // operators
  IntList operator+(const IntList &other);
  int &operator[](int index);
  int operator[](int index) const;

  friend std::ostream &operator<<(std::ostream &os, const IntList &);
};

} // namespace cookbook
