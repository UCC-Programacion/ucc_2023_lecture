#include "Integer.h"

namespace cookbook {

Integer::Integer() : Integer{0} {}

Integer::Integer(int data) : m_data{data} {}

bool Integer::operator==(const Integer &other) {
  return m_data == other.m_data;
}

bool Integer::operator!=(const Integer &other) { return !(*this == other); }

Integer Integer::operator+(const Integer &other) {
  return Integer(m_data + other.m_data);
}

Integer &Integer::operator++() {
  ++m_data;
  return *this;
}

Integer Integer::operator++(int) {
  Integer temp = *this;
  ++m_data;
  return temp;
}

std::ostream &operator<<(std::ostream &os, const Integer &integer) {
  os << "Integer(" << integer.m_data << ")";
  return os;
}

std::istream &operator>>(std::istream &is, Integer &integer) {
  std::cout << "enter data: ";
  is >> integer.m_data;
  return is;
}

} // namespace cookbook