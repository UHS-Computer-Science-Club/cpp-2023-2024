#include <iostream>
#include <string_view>
#include <unordered_map>

int main() {
  std::unordered_map<std::string_view, std::string_view> hash_map = {
      {"key1", "Hello"}, {"key2", "World"}};

  std::cout << hash_map["key1"] << std::endl;
  std::cout << hash_map["key2"] << std::endl;

  return 0;
}