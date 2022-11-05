#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

using std::string;
using std::ostream;
using std::exception;

class Bureaucrat
{
	private:
		const string	kName;
		int				grade;
	
	public:
		static const int	kMaxGrade = 1;
		static const int	kMinGrade = 150;

		Bureaucrat(void);
		Bureaucrat(const string& name, const int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat& other);

		const string&	GetName(void) const;
		int				GetGrade(void) const;
		void			SetGrade(int grade);

		void	IncrementGrade();
		void	DecrementGrade();

		class GradeTooHighException : public exception
		{
			public: const char*	What() const throw();
		};

		class GradeTooLowException : public exception
		{
			public: const char*	What() const throw();
		};
};

ostream&	operator<<(ostream& os, const Bureaucrat& item);

#endif