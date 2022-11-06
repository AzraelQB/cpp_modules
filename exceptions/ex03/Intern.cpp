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

static Form	*makePresident(const string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobot(const string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::MakeForm(string name, string target)
{
	Form* (*availableForms[])(const string target) = {
		&makePresident, &makeRobot, &makeShrubbery };
	string forms[] = { 
		"presidential pardon", "robotomy request", "shrubbery creation" };

	for (int i = 0; i < kFormsAmount; i++)
	{
		if (name == forms[i])
		{
			cout << "Intern created form " << name << endl;
			return (availableForms[i](target));
		}
	}
	cout << "Intern could not find a form " << name << endl; 
	return (nullptr);
}