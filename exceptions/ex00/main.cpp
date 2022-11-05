#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int main(void)
{
	{
		Bureaucrat bur1;
		Bureaucrat bur2("Chernomyrdin", 1);

		bur1.DecrementGrade();
		cout << bur1 << endl;
		bur2.IncrementGrade();
		cout << bur2 << endl;
	}
	Bureaucrat bur3("Nickolay", 0);
	Bureaucrat bur4("Oleg", 11110);
	Bureaucrat bur5(bur4);
	bur5 = bur3;
	cout << bur5 << endl;
}