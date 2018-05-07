#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char *argv[])
{
	string big = "bigGirl", small = "small";
	string big2 = "big";

	if (big > small) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	if (big2 + "Girl" == big) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	big[0] = 'B';
	for (string::size_type i = 0; i < big.size(); i++) {
		cout << big[i] << endl;
	}

	return 0;
}
