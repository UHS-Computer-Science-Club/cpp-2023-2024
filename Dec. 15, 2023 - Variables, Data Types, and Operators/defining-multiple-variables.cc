#include <iostream>

#define type nullptr_t
#define value nullptr

// NOLINTBEGIN(*)
int main() {
  // syntax
  type name = value;

  // examples

  // defining mutable variables
  int a, b, c;
  a = b = c = 1;

  int d = 4, e = 5, f = 6;

  // defining immutable variables (constants)
  const int g = 7;
  constexpr int h = 8;

  std::cout << "After initializing:\n"
            << "a = " << a << ", b = " << b << ", c = " << c << "\n"
            << "d = " << d << ", e = " << e << ", f = " << f << "\n"
            << "g = " << g << ", h = " << h << "\n";

  // mutate variables
  a = b = c = d = e = f = 10;

  std::cout << "After mutating:\n"
            << "a = " << a << ", b = " << b << ", c = " << c << "\n"
            << "d = " << d << ", e = " << e << ", f = " << f << "\n"
            << "g = " << g << ", h = " << h << "\n";

  return 0;
}
// NOLINTEND(*)

#undef type
#undef value
