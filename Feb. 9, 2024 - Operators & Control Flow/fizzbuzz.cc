#include <iostream>

int main() {
  for (unsigned i = 0; i < 100U; ++i) {
    // NOTE: The order does matter in this case
    // i % 3 == 0 && i % 5 == 0 have to be the first conditions
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "FizzBuzz\n";
    } else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    } else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    } else {
      std::cout << i << '\n';
    }
  }

  return 0;
}