#include <array>
#include <iostream>

namespace {

template <typename T>
void print_array(const T &array) {
  for (const auto i : array) {
    std::cout << i << std::endl;
  }
}

}  // namespace

int main() {
  std::array<int, 2> array = {69, 420};

  print_array(array);

  array[0] = 1;
  array[1] = 2;

  print_array(array);

  return 0;
}