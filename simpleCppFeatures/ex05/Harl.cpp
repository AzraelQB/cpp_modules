#include "Harl.hpp"

using std::string;
using std::cout;
using std::endl;

void	Harl::Debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-";
	cout << "triple-pickle-special-ketchup burger. I really do!";
	cout << endl;
}
void	Harl::Info(void)
{
	cout << "I cannot believe adding extra bacon costs more money. ";
	cout << "You didn't put enough bacon in my burger! ";
	cout << "If you did, I wouldn't be asking for more!";
	cout << endl;
}

void	Harl::Warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. ";
	cout << "I've been coming for years whereas you started working ";
	cout << "here since last month.";
	cout << endl;
}

void	Harl::Error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now.";
	cout << endl;
}

void	Harl::Complain(string level)
{
	string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*pComplain[4])(void) = {&Harl::Debug, &Harl::Info, \
			&Harl::Warning, &Harl::Error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*pComplain[i])();
	}
}
