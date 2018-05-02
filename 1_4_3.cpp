#include <iostream>

int main(int argc, const char *argv[])
{
	std::cout << "Enter two numbers :" << std::endl;
	int a, b;
	std::cin >> a >> b;

	int min = a, max = b;
	if (min > max) {
		min = b;
		max = a;
	}

	int sum = 0, i;

	for (i = min; i <= max; i++) {
		sum += i;
	}
	std::cout << "Sum of " << min << " to " << max << " inclusive is " << sum << std::endl;

	return 0;
}
