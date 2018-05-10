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
	int a;
	vector<int> ivec;

	cout << "Enter some num (Ctrl + D to end) :" << endl;

	while (cin >> a) {
		if (a & 0x01) {
			ivec.push_back(a * 2);
		} else {
			ivec.push_back(a);
		}
	}
	cout << "-----" << endl;
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << endl;
	}

	return 0;
}
