#pragma once

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

using std::string;
using std::ostream;
using std::exception;

class Bureaucrat;

class Form
{
	private:
		const string	kName;
		const int		kGradeToSign;
		const int		kGradeToExec;
		bool			isSigned;
	
	public:
		Form(void);
		Form(const string& name, const int toSign, const int toExec);
		Form(const Form& other);
		virtual ~Form(void);

		Form&	operator=(const Form& other);

		const string&	GetName(void) const;
		int				GetGradeToSign(void) const;
		int				GetGradeToExec(void) const;
		bool			GetIsSigned(void) const;

		void			BeSigned(Bureaucrat& bur);
		void			Execute(Bureaucrat const& executor) const;
		virtual void	FormAction(void) const = 0;

		class GradeTooHighException : public exception
		{
			public: const char*	What() const throw();
		};

		class GradeTooLowException : public exception
		{
			public: const char*	What() const throw();
		};

		class NotSignedException : public exception
		{
			public: const char* What() const throw();
		};
};

ostream&	operator<<(ostream& os, const Form& item);
