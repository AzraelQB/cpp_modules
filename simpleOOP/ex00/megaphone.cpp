#include <iostream>

using std::cout;
using std::endl;
using std::toupper;
using std::string;

int main(int argc, char **argv)
{
	string str;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (int j = 0; str[j]; j++)
				cout << static_cast<char>(toupper(str[j]));
		}
		cout << endl;
	}
}
