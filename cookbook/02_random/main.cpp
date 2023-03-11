#include <iostream>

#include <ctime> /* time */

#include <cstdlib> /* srand, rand */

#include <random> /* default_random_engine, uniform_int_distribution */

int main() {
  // Option #1 <cstdlib> + <ctime>
  // See https://cplusplus.com/reference/cstdlib/rand/
  std::cout << "Option #1 " << std::endl;
  std::srand(
      std::time(nullptr)); // use current time as seed for random generator
  int random_variable = std::rand();
  std::cout << "Random value on [0 " << RAND_MAX << "]: " << random_variable
            << '\n';

  // roll 6-sided dice 20 times
  for (int n = 0; n != 20; ++n) {
    int x = 1 + std::rand() % 6;
    std::cout << x << " ";
  }
  std::cout << std::endl;

  // Option #2 C++11 <random>
  // See https://en.cppreference.com/w/cpp/numeric/random
  std::cout << "Option #2" << std::endl;
  std::random_device r; // Seed with a real random value, if available
  std::default_random_engine generator(r());
  std::uniform_int_distribution<int> distribution(1, 6);
  for (int i = 0; i < 20; ++i) {
    int dice_roll =
        distribution(generator); // generates number in the range 1..6
    std::cout << dice_roll << " ";
  }
  std::cout << std::endl;

  return 0;
}