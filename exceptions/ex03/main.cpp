#include "Intern.hpp"

using std::cout;
using std::endl;
using std::cerr;

int main(void)
{
	{
		Intern someRandomIntern;
		Form* rrf;

		rrf = someRandomIntern.MakeForm("robotomy request", "Bender");
		delete rrf;
		rrf = someRandomIntern.MakeForm("presidential pardon", "C3pio");
		delete rrf;
		rrf = someRandomIntern.MakeForm("shrubbery creation", "");
		delete rrf;
		rrf = someRandomIntern.MakeForm("random", "notarget");
	}
}