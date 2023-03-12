#include "IntArray.h"
#include <exception>
#include <iostream>
#include <stdexcept>

int main() {
  // Standard exceptions
  // see https://en.cppreference.com/w/cpp/error/exception

  cookbook::IntArray array;

  std::cout << array << std::endl;

  try {
    array[-1];
    // array[10];
  } catch (const cookbook::IntArray::BadIndexError &e) {
    std::cout << "captured cookbook::IntArray::BadIndexError " << e.what()
              << std::endl
              << "bad index value: " << e.index() << std::endl;
  } catch (const std::out_of_range &e) {
    std::cout << "captured std::out_of_range " << e.what() << std::endl;
  } catch (const std::logic_error &e) {
    std::cout << "captured std::logic_error " << e.what() << std::endl;
  } catch (const std::exception &e) {
    std::cout << "captured std::exception " << e.what() << std::endl;
  }

  return 0;
}