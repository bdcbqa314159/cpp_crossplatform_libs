#include <iostream>

#include "my_library"  // IWYU pragma: keep

// This works because the library is statically linked.
// The library is not exported, so we can use it directly.

int main() {
  std::cout << my_library() << std::endl;

  std::cout << "simple_addition(1.0, 2.0) = " << simple_addition(1.0, 2.0)
            << std::endl;

  std::cout << "simple_multiplication(1.0, 2.0) = "
            << simple_multiplication(1.0, 2.0) << std::endl;

  return 0;
}