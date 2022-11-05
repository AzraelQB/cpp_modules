#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp" 
#include "ShrubberyCreationForm.hpp"

using std::cout;
using std::endl;
using std::cerr;

int main(void)
{
	{
		PresidentialPardonForm	ppf1;
		Bureaucrat				god("God", 1);

		cout << ppf1 << endl;
		god.SignForm(ppf1);
		god.ExecuteForm(ppf1);
		cout << ppf1 << endl;

		PresidentialPardonForm	ppf2(ppf1);
		cout << ppf2 << endl;

		PresidentialPardonForm	ppf3("yo mama");
		god.SignForm(ppf3);
		god.ExecuteForm(ppf3);

		try
		{
			god.ExecuteForm(ppf2);
		}
		catch (Form::NotSignedException& e)
		{
			cerr << "\n\tERROR: " << e.What();
		}

		Bureaucrat	slabyi("Slabyi", 30);
		try
		{
			slabyi.ExecuteForm(ppf3);
		}
		catch (Form::GradeTooLowException& e)
		{
			cerr << "\n\tERROR: " << e.What();
		}
	}
	RobotomyRequestForm	ppf4("random stranger");
	Bureaucrat			god("God", 1);

	god.SignForm(ppf4);
	god.ExecuteForm(ppf4);
	god.ExecuteForm(ppf4);

	ShrubberyCreationForm	ppf5("newfile");

	god.SignForm(ppf5);
	god.ExecuteForm(ppf5);
}