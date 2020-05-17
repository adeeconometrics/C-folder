#include <iostream>
using namespace std;

int prime_number_generator(int number) {
  bool is_prime_flag = true;

  for (int counter = 2; counter <= number / 2; counter++) {
    if (number % counter == 0) {
      is_prime_flag = false;
      break;
    }
  }
  return is_prime_flag;
}

int main() {
  bool is_prime_flag;
  int limit, primes = 0;

  std::cout << "enter limit:";
  std::cin >> limit;

  for (int number = 2; number < limit; number++) {
    // is_prime_flag will be true for prime numbers
    is_prime_flag = prime_number_generator(number);

    if (is_prime_flag == true) {
      std::cout << number << " ";
      ++primes;
    }
  }

  std::cout << "there are" << primes << " prime numbers";
  return 0;
}
