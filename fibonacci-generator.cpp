#include <iostream>

// this only works when initialized to 1.

using namespace std;

void fibonacci_generator(int initial_value, int number_of_iteration) {
  int counter = 0, _window, _update = 0;

  do {
    if (counter == 0) {
      if (initial_value == 0) {
        std::cout << initial_value << " ";
        initial_value = 1;
        std::cout << initial_value;

        ++counter;
      }

      std::cout << initial_value;
      _window = initial_value + initial_value;
    }

    _update = _window + _update;
    std::cout << " " << _update;

    _window = _update - _window;
    ++counter;
  } while (counter < number_of_iteration);
}

int main() {
  int initial_value, generation;

  std::cout << "enter initial value: ";
  std::cin >> initial_value;

  std::cout << "enter number of generations: ";
  std::cin >> generation;

  fibonacci_generator(initial_value, generation);
}
