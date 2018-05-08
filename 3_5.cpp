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
	vector<string> svec(4, "Hello");
	string astr;

	svec[2] = "Hat";
	svec.push_back("World");
	for (int i = 0; i < svec.size(); i++) {
		cout << i << "\t" << svec[i] << endl;
	}

	return 0;
}
