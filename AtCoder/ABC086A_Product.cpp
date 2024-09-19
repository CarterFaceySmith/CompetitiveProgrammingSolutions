// Determine product of two ints received via stdin is even or odd, print Even or Odd as ret val.
#include <iostream>

int main() {
  int a, b;
  std::cin >> a;
  std::cin >> b;
  ((a * b) % 2 == 0) ? std::cout << "Even" : std::cout << "Odd";
}
