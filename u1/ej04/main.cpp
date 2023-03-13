#include <cassert>
#include <iostream>

int factorial(int);

int main() {
  std::cout << "factorial(0) " << factorial(0) << std::endl;
  std::cout << "factorial(3) " << factorial(3) << std::endl;
  std::cout << "factorial(5) " << factorial(5) << std::endl;

  return 0;
}

// f(0) = 1
// f(1) = 1  = 1 * f(0)
// f(2) = 2  = 2 * f(1)
// f(3) = 6  = 3 * f(2)
// f(4) = 24 = 4 * f(3)
// f(4) = 24 = 4 * 3 * 2 * 1
// f(n) = ?  = n * f(n-1)

int factorial(int n) {
  assert(n >= 0);

  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}
