#include <iostream>

namespace cookbook {

template <typename T> void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

} // namespace cookbook

int main() {
  int x = 1;
  int y = 2;

  std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

  cookbook::swap(x, y);

  std::cout << "x = " << x << std::endl << "y = " << y << std::endl;

  return 0;
}