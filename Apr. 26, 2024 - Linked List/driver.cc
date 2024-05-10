#include <iostream>
#include <string_view>

#include "singly-linked-list.h"

int main() {
  containers::SinglyLinkedList<std::string_view> list;

  list.push_back("Hello");
  list.push_back("World");

  std::cout << list.size() << "\n";

  std::cout << list[1] << "\n" << list[0] << "\n";

  auto iterator = list.begin();

  std::cout << *iterator << "\n";

  ++iterator;

  std::cout << *iterator << "\n";

  return 0;
}
