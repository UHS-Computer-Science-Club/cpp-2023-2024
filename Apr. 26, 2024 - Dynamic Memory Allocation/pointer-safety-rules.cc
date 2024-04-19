// NOLINTBEGIN(cppcoreguidelines-owning-memory,*-magic-numbers)

#include <iostream>

int main() {
  int *int_ptr = new int(6);  // Request memory on heap
  std::cout << "Heap allocated: " << *int_ptr
            << std::endl;  // Use the piece of memory for tasks
  delete int_ptr;          // ALWAYS free the memory when done

  // *int_ptr = 9; // FORBIDDEN: Accessing memory after freeing/deleting it

  int *the_other_int_ptr = new int(9);

  // ALWAYS make sure pointer is not null before you use it
  if (the_other_int_ptr != nullptr) {
    std::cout << "Heap allocated: " << *the_other_int_ptr
              << std::endl;  // Use the piece of memory for tasks
  }

  delete the_other_int_ptr;  // ALWAYS free the memory when done

  return 0;
}

// NOLINTEND(cppcoreguidelines-owning-memory,*-magic-numbers)