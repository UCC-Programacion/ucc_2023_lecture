#pragma once

#include <iostream>

namespace cookbook {

class Integer {
private:
  int m_data;

public:
  Integer();
  Integer(int data);

  // operators
  bool operator==(const Integer &);
  bool operator!=(const Integer &);
  Integer operator+(const Integer &);
  Integer &operator++();
  Integer operator++(int);

  friend std::ostream &operator<<(std::ostream &os, const Integer &integer);
  friend std::istream &operator>>(std::istream &is, Integer &integer);
};

} // namespace cookbook
