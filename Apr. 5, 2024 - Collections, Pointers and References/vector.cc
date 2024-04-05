#include <iostream>
#include <vector>

namespace {

template <typename T>
void print_vector(const T &vector) {
  for (const auto i : vector) {
    std::cout << i << std::endl;
  }
}

}  // namespace

int main() {
  std::vector<int> vector = {69, 420};

  print_vector(vector);

  vector[0] = 1;
  vector[1] = 2;
  vector.push_back(3);

  print_vector(vector);

  return 0;
}