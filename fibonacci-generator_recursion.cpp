#include <iostream>

using namespace std;

int fibonacci_generator(int _initial_value) {
  if (_initial_value <= 1)
    return _initial_value;
  return fibonacci_generator(_initial_value - 1) +
         fibonacci_generator(_initial_value - 2);
}

int main() {
  int initial_value;

  std::cout << "enter initial value:";
  std::cin >> initial_value;

  std::cout << fibonacci_generator(initial_value);
  return 0;
}
