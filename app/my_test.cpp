#include <iostream>

#include "my_library"  // IWYU pragma: keep

int main() {
  std::cout << my_library() << std::endl;

  return 0;
}