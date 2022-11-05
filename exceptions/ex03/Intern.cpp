#include "Intern.hpp"

using std::cout;
using std::endl;

Intern::Intern(void)
{
	cout << "Intern created" << endl;
}

Intern::Intern(const Intern& other)
{
	cout << "Intern copied" << endl;
	(void)other; //utterly useless, but required by the task
}

Intern::~Intern(void)
{
	cout << "Intern destroyed" << endl;
}

Intern&	Intern::operator=(const Intern& other)
{
	cout << "Intern assignation called. Nothing to assign." << endl;
	if (this == &other) 
		return (*this); //utterly useless, but required by the task
	return (*this);
}

Form*	Intern::MakeForm(string name, string target)
{
	Form*	ret = NULL;
	t_forms	availableForms[kFormsAmount] = {
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) }
	};

	for (int i = 0; i < kFormsAmount; ++i)
	{
		if (name == availableForms[i].name)
			ret = availableForms[i].pForm;
		else
			delete availableForms[i].pForm;
	}
	if (ret)
		cout << "Intern created form " << name << endl;
	else
		cout << "Intern could not find a form " << name << endl; 
	return (ret);
}