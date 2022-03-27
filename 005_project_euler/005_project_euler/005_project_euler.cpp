#include <iostream>

void smallest_multiple(int highest_divider) {
	int dividers = 0;
	int number = 1;
	while (dividers != highest_divider) {
		dividers = 0;
		for (int i = 1; i <= highest_divider; ++i) {
			if (number % i != 0) break;
			if (number % i == 0) ++dividers;
		}
		if (dividers == highest_divider) {
			std::cout << number << "\n";
		}
		++number;
	}
}

int main()
{
	smallest_multiple(20);
}
