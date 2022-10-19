#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(void)
{
	string	str = "HI THIS IS BRAIN";
	string&	stringREF = str;
	string* stringPTR = &str;

	cout << &str << endl;
	cout << &stringREF << endl;
	cout << stringPTR << endl << endl;
	cout << str << endl;
	cout << stringREF << endl;
	cout << *stringPTR << endl;
	return (0);
}
