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
	string istr;

	cin >> istr;

	cout << "Enter : " << istr << endl;

	const char *pstr = istr.c_str();

	cout << "Its size is " << istr.size() << " " << strlen(pstr) << endl;

	return 0;
}
