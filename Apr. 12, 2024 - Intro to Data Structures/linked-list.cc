#include <iostream>
#include <list>

#include "ostream-extensions.h"

int main() {
  std::list<const char *> hello_world = {"Hello"};
  hello_world.push_back("World");

  std::cout << hello_world << std::endl;

  return 0;
}