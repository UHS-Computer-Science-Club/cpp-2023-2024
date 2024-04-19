// NOLINTBEGIN(cppcoreguidelines-owning-memory,*-magic-numbers)

#include <iostream>

int main() {
  int *heap_allocated = new int(6);

  std::cout << "Heap allocated: " << *heap_allocated << std::endl;

  delete heap_allocated;

  int stack_allocated = 9;

  std::cout << "Stack allocated: " << stack_allocated << std::endl;

  return 0;
}

// NOLINTEND(cppcoreguidelines-owning-memory,*-magic-numbers)