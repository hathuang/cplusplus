#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char *argv[])
{
	string st("The expense of spirit\n");
	cout << "Size of " << "\"" << st << "\" is " << st.size() \
	     << " chars, including the newline" << endl;

	return 0;
}
