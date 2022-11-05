#pragma once

# include <string>
# include "Form.hpp"

using std::string;

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private:
		string	target;
	
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const string& name);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

		void FormAction(void) const;
};
