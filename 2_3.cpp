#include <iostream>

int main(int argc, const char *argv[])
{
	int a, b;
	std::cout << "Enter Base :";
	std::cin >> b;
	std::cout << std::endl;

	std::cout << "Enter Exponent :";
	std::cin >> a;
	std::cout << std::endl;
	int sum = 1, i;

	for (i = 0; i < a; i++) {
		sum *= b;
	}
	std::cout << "Result : " << b << " ^ " << a << " = " << sum << std::endl;

	return 0;
}
