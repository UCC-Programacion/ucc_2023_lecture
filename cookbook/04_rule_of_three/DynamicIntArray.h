#pragma once

#include <cstdlib>
#include <iostream>

namespace cookbook {

class DynamicIntArray {
private:
  int *m_data;
  std::size_t m_size;

public:
  DynamicIntArray(std::size_t);

  // See https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)
  ~DynamicIntArray();
  DynamicIntArray(const DynamicIntArray &);
  DynamicIntArray &operator=(DynamicIntArray); // note: argument passed by value

  //  DynamicIntList &operator=(const DynamicIntList &); // note: argument
  //  passed by reference

  void swap(DynamicIntArray &);

  bool operator==(const DynamicIntArray &other);
  int &operator[](int index);
  int operator[](int index) const;

  friend std::ostream &operator<<(std::ostream &os, const DynamicIntArray &);
};

} // namespace cookbook
