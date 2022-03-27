#include <iostream>

bool is_prime(int num) {
	int dividers = 0;
	for (int i = 1; i <= num; ++i) {
		if (num % i == 0) ++dividers;
	}
	if (dividers == 2) {
		return true;
	}
	else {
		return false;
	}
}

int nth_prime(int num) {
	int index = 0;
	int i = 1;
	while (index != num) {
		++i;
		if (is_prime(i)) {
			++index;
		}
	}
	return i;
}

int main()
{
    std::cout << nth_prime(10001); 
}

