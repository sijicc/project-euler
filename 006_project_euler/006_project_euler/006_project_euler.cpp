#include <iostream>

int sum_square_difference(int max) {
	int sum = 0;
	int square = 0;
	for (int i = 1; i <= max; ++i) {
		sum += i * i;
		square += i;
	}
	return (square * square) - sum;
}

int main()
{
	std::cout << sum_square_difference(100);
}

