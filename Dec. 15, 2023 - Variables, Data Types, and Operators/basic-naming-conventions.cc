#include <iostream>

namespace {

// NOLINTNEXTLINE(cppcoreguidelines-avoid-non-const-global-variables)
std::string_view this_is_a_variable = "Variable names should be in snake_case";

constexpr std::string_view kThisIsAConstant =
    "Constant names should be in kCamelCase, notice the k prefix";

[[nodiscard]] constexpr std::string_view ThisIsAFunction() {
  return "Function names should be in CamelCase";
}

}  // namespace

int main() {
  std::cout << this_is_a_variable << "\n"
            << kThisIsAConstant << "\n"
            << ThisIsAFunction() << "\n";

  return 0;
}
