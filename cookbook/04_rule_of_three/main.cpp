#include "DynamicIntList.h"
#include <iostream>

int main() {
  cookbook::DynamicIntList list1{5};
  cookbook::DynamicIntList list2 = list1; // copy constructor

  std::cout << "list1: " << list1 << std::endl;
  std::cout << "list2: " << list2 << std::endl;
  std::cout << "list1 == list2 " << (list1 == list2) << std::endl;

  list1[2] = 9;

  std::cout << "list1: " << list1 << std::endl;
  std::cout << "list2: " << list2 << std::endl;
  std::cout << "list1 == list2 " << (list1 == list2) << std::endl;
  
  cookbook::DynamicIntList list3{3};

  std::cout << "list3: " << list3 << std::endl;
  list3 = list1; // assigment operator
  list1[4] = 7;
  std::cout << "list1: " << list1 << std::endl;
  std::cout << "list3: " << list3 << std::endl;

  return 0;
}