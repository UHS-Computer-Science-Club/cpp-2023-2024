#include <iostream>

// forward declaration of function
void ForwardDeclaredFunction();

// definition of previously declared function
void ForwardDeclaredFunction() {
  std::cout << "forward_declaration_of_function() called\n";
}

// entry point
int main() {
  ForwardDeclaredFunction();
  return 0;
}
