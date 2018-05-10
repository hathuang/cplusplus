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
	string str;
	vector<string *> spvec;

	cout << "Enter some strings (Ctrl + Z to end)" << endl;
	while (cin >> str) {
		string *pstr = new string;
		*pstr = str;
		spvec.push_back(pstr);
		if (str == "q") {
			break;
		}
	}
	cout << endl;
	for (vector<string *>::iterator iter = spvec.begin(); iter != spvec.end(); ++iter) {
		cout << **iter << "\t" << (**iter).size() << endl;
	}

	return 0;
}
