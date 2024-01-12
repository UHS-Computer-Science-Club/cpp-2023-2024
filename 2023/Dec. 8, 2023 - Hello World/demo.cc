#include <iostream>

namespace custom {
void cout() {}
}  // namespace custom

int main() {
  std::cout << "first string\n"
            << "another string" << std::endl;
}