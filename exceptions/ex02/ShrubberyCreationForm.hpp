#pragma once

#include <string>
#include <fstream>
#include "Form.hpp"

using std::string;

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		string	target;
	
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const string& name);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

		void FormAction(void) const;
};
