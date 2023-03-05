#include <iostream>

namespace mymath {

int sum(int, int);

}

int main() {
  std::cout << "sum(1,2) = " << mymath::sum(1, 2) << std::endl;

  return EXIT_SUCCESS;
}

int mymath::sum(int a, int b) { return a + b; }
