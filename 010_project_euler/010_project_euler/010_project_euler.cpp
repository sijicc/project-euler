#include <iostream>
#include <vector>

std::vector<int> not_primes = { 0, 1 };
void sieve_of_erastothenes(unsigned __int64 max) {
	for (int i = 2; i < sqrt(max); ++i) {
		if (std::count(not_primes.begin(), not_primes.end(), i)) {
			for (int a = 2; a < max; ++a) {
				not_primes.push_back(i * a);
				if (a == 1000000) {
					std::cout << i << ", " << not_primes.size() << "\n";
				}
			}
		}
	}
}

unsigned __int64 sum_primes(unsigned __int64 max) {
	sieve_of_erastothenes(max);
	unsigned __int64 sum = 0;
	for (int i = 0; i < max; ++i) {
		if (!std::count(not_primes.begin(), not_primes.end(), i)) {
			sum += i;
			//std::cout << i << "\n";
		}
	}
	return sum;
}

int main()
{
	std::cout << sum_primes(10000000) << "\n";
	for (int number : not_primes) {
		std::cout << number << "\n";
	}
}
