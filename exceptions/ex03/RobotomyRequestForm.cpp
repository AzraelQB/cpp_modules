#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;

RobotomyRequestForm::RobotomyRequestForm(void):
	Form("robotomy request", 72, 45),
	target("default target")
{}

RobotomyRequestForm::RobotomyRequestForm(const string& name):
	Form("robotomy request", 72, 45),
	target(name)
{}

RobotomyRequestForm::RobotomyRequestForm(const 
							RobotomyRequestForm& other):
	Form("robotomy request", other.GetGradeToSign(), other.GetGradeToExec()),
	target(other.target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const 
							RobotomyRequestForm& other)
{
	cout << "Form assignation called. Nothing to assign." << endl;
	if (this == &other) 
		return (*this); //utterly useless, but required by the task
	return (*this);
}

void RobotomyRequestForm::FormAction(void) const
{
	//std::srand(std::time(NULL)); // use current time as seed for random generator

	cout << "* INTENSE DRILLING NOISES *" << endl;
	if (std::rand() % 2 == 0) 
		cout << target << " has been robotomized succesfully" << endl;
	else 
		cout << "Failed to robotomized " << target << endl;
}
