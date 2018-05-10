#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, const char *argv[])
{
	vector<int> ivec(8);

	cout << "Size type :" << endl;
	for (vector<int>::size_type i = 0; i < ivec.size(); i++) {
		ivec[i] = 8;
	}
	for (vector<int>::size_type i = 0; i < ivec.size(); i++) {
		cout << ivec[i] << endl;
	}

	cout << "Iterator :" << endl;
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++) {
		*iter = 5;
	}
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++) {
		cout << *iter << endl;
	}

	return 0;
}
