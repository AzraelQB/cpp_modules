#pragma once

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

using std::string;

class Intern
{
	private:
		static const int	kFormsAmount = 3;
		typedef struct s_forms {
			string	name;
			Form*	pForm;
		} t_forms;
	
	public:
		Intern(void);
		Intern(const Intern& other);
		~Intern(void);

		Intern&	operator=(const Intern& other);

		Form*	MakeForm(string name, string target);
};
