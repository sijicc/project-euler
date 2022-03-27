#include <iostream>

int special_pythagorean_triplet(int max) {
	int product = 0;
	for (int a = 1; a < max / 2; ++a) {
		for (int b = 2; b < max / 2; ++b) {
			for (int c = max; c > 0; --c) {
				if (a * a + b * b == c * c && a + b + c == max && b > a && b < c) {
					std::cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\n";
					product = a * b * c;
					return product;
				}
			}
		}
	}
}

int main()
{
	std::cout << special_pythagorean_triplet(1000);
}