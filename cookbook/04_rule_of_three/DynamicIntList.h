#pragma once

#include <cstdlib>
#include <iostream>

namespace cookbook {

class DynamicIntList {
private:
  int *m_data;
  std::size_t m_size;

public:
  DynamicIntList(std::size_t);

  // See https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)
  ~DynamicIntList();
  DynamicIntList(const DynamicIntList &);
  DynamicIntList &operator=(DynamicIntList); // note: argument passed by value

  //  DynamicIntList &operator=(const DynamicIntList &); // note: argument
  //  passed by reference

  void swap(DynamicIntList &);

  bool operator==(const DynamicIntList &other);
  int &operator[](int index);
  int operator[](int index) const;

  friend std::ostream &operator<<(std::ostream &os, const DynamicIntList &);
};

} // namespace cookbook
