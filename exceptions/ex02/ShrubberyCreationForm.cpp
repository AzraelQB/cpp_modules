#include "ShrubberyCreationForm.hpp"

using std::cout;
using std::endl;
using std::cerr;

ShrubberyCreationForm::ShrubberyCreationForm(void):
	Form("shrubbery creation", 145, 137),
	target("default target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const string& name):
	Form("shrubbery creation", 145, 137),
	target(name)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const 
							ShrubberyCreationForm& other):
	Form("shrubbery creation", other.GetGradeToSign(), other.GetGradeToExec()),
	target(other.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const 
							ShrubberyCreationForm& other)
{
	cout << "Form assignation called. Nothing to assign." << endl;
	if (this == &other) 
		return (*this); //utterly useless, but required by the task
	return (*this);
}

void ShrubberyCreationForm::FormAction(void) const
{
	std::ofstream out;

	out.open((target + "_shrubbery").c_str(), std::ofstream::in | 
				std::ofstream::trunc);
	if (out.fail())
	{
		cerr << "Error opening the file" << endl;
		return ;
	}
	out << endl;
	out << "    @@@@@@@   " << endl;
	out << "   @@@@@@/@@  " << endl;
	out << "  @@@@@/@@@@@@" << endl;
	out << "  @@@|@@@/@@@@" << endl;
	out << "  @@|@@/ /@@@ " << endl;
	out << "     |  /@@   " << endl;
	out << "     | |      " << endl;
	out << "     | |      " << endl;
	out << "     | |      " << endl;
	out << "  __/  ,|___  " << endl;
}
