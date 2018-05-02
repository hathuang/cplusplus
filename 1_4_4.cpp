#include <iostream>

int main(int argc, const char *argv[])
{
	int sum = 0, val = 1;

	while (std::cin >> val) {
		sum += val;
		val++;
	}
	std::cout << "Sum is " << sum << std::endl;

	return 0;
}
