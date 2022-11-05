#pragma once

#include <string>
#include <cstdlib>
#include "Form.hpp"

using std::string;

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
		string	target;
	
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const string& name);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

		void FormAction(void) const;
};
