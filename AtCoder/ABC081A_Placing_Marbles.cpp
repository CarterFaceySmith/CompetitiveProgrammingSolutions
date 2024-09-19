// Given a three digit int from stdin consisting of 1s and/or 0s, print the number of 1s.

#include <iostream>
#include <string>
using namespace std;

int main() {
  int counter = 0;
  int num;

  cin >> num;

  std::string numStr = std::to_string(num);

  for (char c : numStr) {
    if (c == '1') counter++;
  }

  cout << counter;
}
