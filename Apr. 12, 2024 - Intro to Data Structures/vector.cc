#include <iostream>
#include <vector>

#include "ostream-extensions.h"

int main() {
  std::vector<const char *> hello_world(0);
  std::clog << "vector size before first push_back: " << hello_world.size()
            << "\n";

  hello_world.push_back("Hello");
  std::clog << "vector size after first push_back: " << hello_world.size()
            << "\n";

  hello_world.push_back("World");
  std::clog << "vector size after second push_back: " << hello_world.size()
            << "\n";

  std::cout << hello_world << "\n";

  return 0;
}