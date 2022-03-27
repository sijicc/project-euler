#include <iostream>
#include <string>

bool is_palindrome(int number) {
	std::string num = std::to_string(number);
	std::string reversed_num;
	for (int i = 1; i <= int(num.length()); ++i) {
		reversed_num += num[int(num.length()) - i];
	}
	if (reversed_num == num) {
		return true;
	}
	else {
		return false;
	}
}

int largest_palindrome() {
	int largest = 0;
	for (int a = 999; a > 0; --a) {
		for (int b = 999; b > 0; --b) {
			if (a * b > largest && is_palindrome(a * b)) {
				largest = a * b;
				std::cout << a << " * " << b << " = " << a * b << "\n";
			}
		}
	}
	return largest;
}

int main()
{
	std::cout << largest_palindrome();
}
