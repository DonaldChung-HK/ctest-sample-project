#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "usage: test <argument>" << std::endl;
    std::cout << "    If <argument> is 0, print SUCCESS. Otherwise print FAIL." << std::endl;
    return 1;
  }
  int result {atoi(argv[1])};
  if (result == 0) {
    std::cout << "SUCCESS" << std::endl;
    return 0;
  } else {
    std::cout << "This is a fail test" << std::endl;
    std::cout << "FAIL" << std::endl;
    std::ifstream f{"message_a.txt"};
    std::cout << f.rdbuf();
    return 1;
  }
}
