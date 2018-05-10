#include <iostream>
#include <string>
#include <vector>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, const char *argv[])
{
	int a, b;
	cout << "Enter 2 num :" << endl;

	cin >> a >> b;

	if (a == b) {
		cout << a << " = " << b << endl;
	} else if (a < b) {
		cout << a << " < " << b << endl;
	} else {
		cout << a << " > " << b << endl;
	}

	return 0;
}
