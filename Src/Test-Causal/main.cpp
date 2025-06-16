#include <iostream>
#include <test_mode.hpp>

int main() {
#ifdef TEST_MODE
  run_test();
#endif
  return 0;
}
