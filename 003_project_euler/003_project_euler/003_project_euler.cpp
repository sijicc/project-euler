#include <iostream>
#include <time.h>

bool is_prime(int number) {
	int dividers_count = 0;
	for (int i = 1; i <= number; ++i) {
		if (number % i == 0) {
			++dividers_count;
		}
	}
	if (dividers_count == 2) {
		return true;
	}
	else {
		return false;
	}
}

int largest_prime_factor(unsigned long long number) {
	unsigned long long largest_divider = 0;
	for (int i = 1; i <= number; ++i) {
		if (number % i == 0 && is_prime(i)) {
			largest_divider = i;
			std::cout << largest_divider << "\n";
		}
	}
	std::cout << largest_divider;
	return largest_divider;
}

int main()
{
	largest_prime_factor(600851475143);
}

