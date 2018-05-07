#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char *argv[])
{
	string astr, bstr;

	cin >> astr >> bstr;

	cout << astr;
	if (astr == bstr) {
		cout << " = ";
	} else if (astr > bstr) {
		cout << " > ";
	} else {
		cout << " < ";
	}
	cout << bstr << endl;

	return 0;
}
