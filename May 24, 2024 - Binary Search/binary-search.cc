#include <algorithm>
#include <iostream>
#include <vector>

namespace {
int BinarySearch(const std::vector<int> &kAscendingVector, const int kTarget) {
  int lower = 0;
  int upper = kAscendingVector.size() - 1;

  while (lower <= upper) {
    const int kMiddle = (lower + upper) / 2;

    if (kTarget < kAscendingVector[kMiddle]) {
      upper = kMiddle - 1;
    } else if (kTarget > kAscendingVector[kMiddle]) {
      lower = kMiddle + 1;
    } else {
      return kMiddle;
    }
  }

  return -1;
}
}  // namespace

int main() {
  std::vector<int> inputs;

  while (true) {
    char value = 0;
    std::cin >> value;

    if (value >= '0' && value <= '9') {
      // char number to int
      // '1' = '0' + 1
      inputs.emplace_back(value - '0');
    } else {
      break;
    }
  }

  std::sort(inputs.begin(), inputs.end());

  int target = 0;
  std::cin >> target;

  if (const int kIndex = BinarySearch(inputs, target); kIndex > -1) {
    std::cout << "target index:\t" << kIndex << "\n"
              << "target:\t\t" << inputs[kIndex] << "\n";
  } else {
    std::cout << "target not in vector\n";
  }

  return 0;
}
