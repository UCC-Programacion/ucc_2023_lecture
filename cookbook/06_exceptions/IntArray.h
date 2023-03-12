#pragma once

#include <iostream>
#include <stdexcept>

namespace cookbook {

class IntArray {
private:
  static const int kSize = 5;

  int m_data[kSize];

public:
  class BadIndexError : public std::logic_error {
  private:
    const int m_index;

  public:
    BadIndexError(int index, const std::string &message = "Index error")
        : std::logic_error{message}, m_index{index} {}
    int index() const { return m_index; }
  };

  IntArray();

  // operators
  int &operator[](int);
  int operator[](int) const;

  friend std::ostream &operator<<(std::ostream &, const IntArray &);
};

} // namespace cookbook
