#include "Harl.hpp"

using std::string;
using std::cout;
using std::endl;

int	getLevel(char *arg)
{
	string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == arg)
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		cout << "Invalid number of args" << endl;
		return (1);
	}
	switch (getLevel(argv[1]))
	{
		case 0:
			harl.Complain("DEBUG");
		case 1:
			harl.Complain("INFO");
		case 2:
			harl.Complain("WARNING");
		case 3:
			harl.Complain("ERROR");
			break;
		default:
			cout << "Invalid arg" << endl;
	}
	return (0);
}
