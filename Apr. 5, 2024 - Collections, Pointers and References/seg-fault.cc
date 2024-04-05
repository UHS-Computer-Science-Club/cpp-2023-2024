int main() {
  int *will_cause_seg_fault = nullptr;

  *will_cause_seg_fault = 0;

  return 0;
}