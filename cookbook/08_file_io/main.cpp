#include <fstream>
#include <iostream>

void write_file(const std::string &file_name) {
  std::ofstream fout;
  // note: current working directory is ./cmake-build-debug/cookbook/08_file_io
  fout.open(file_name);
  if (!fout.is_open()) {
    std::cout << "> failed to open text.txt" << std::endl;
    abort();
  }
  fout << "writting some text" << std::endl;
  fout.close();
  fout.clear();
}

void read_file(const std::string &file_name) {
  std::ifstream fin;
  fin.open(file_name);
  if (!fin.is_open()) {
    std::cout << "> failed to open text.txt" << std::endl;
    abort();
  }
  char ch;
  while (fin.get(ch)) {
    std::cout << ch;
  }
  fin.close();
  fin.clear();
}

int main() {
  std::cout << "> reading input.txt" << std::endl;
  read_file("input.txt");

  std::cout << "> writting new text.txt" << std::endl;
  write_file("text.txt");

  std::cout << "> reading previous text.txt" << std::endl;
  read_file("text.txt");

  return EXIT_SUCCESS;
}