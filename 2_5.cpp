#include <iostream>
#include <string>

int main(int argc, const char *argv[])
{
	int i = 42;
	const int &r = 42;
	const int &r2 = r + i;

	std::cout << " " << i << r << r2 << std::endl;

	return 0;
}
