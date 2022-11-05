#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;

PresidentialPardonForm::PresidentialPardonForm(void):
	Form("presidential pardon", 25, 5),
	target("default target")
{}

PresidentialPardonForm::PresidentialPardonForm(const string& name):
	Form("presidential pardon", 25, 5),
	target(name)
{}

PresidentialPardonForm::PresidentialPardonForm(const 
							PresidentialPardonForm& other):
	Form("presidential pardon", other.GetGradeToSign(), other.GetGradeToExec()),
	target(other.target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const 
							PresidentialPardonForm& other)
{
	cout << "Form assignation called. Nothing to assign." << endl;
	if (this == &other) 
		return (*this); //utterly useless, but required by the task
	return (*this);
}

void PresidentialPardonForm::FormAction(void) const
{
	cout << target << " has been pardoned by Zaphod Beeblebrox" << endl;
}
