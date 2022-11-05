#include "Form.hpp"

using std::cout;
using std::endl;
using std::cerr;

Form::Form(void):
	kName("unnamed"),
	kGradeToSign(Bureaucrat::kMinGrade),
	kGradeToExec(Bureaucrat::kMinGrade),
	isSigned(false)
{
	cout << "Form " << kName << " created" << endl;
}

Form::Form(const string& name, const int toSign, const int toExec):
	kName(name),
	kGradeToSign(toSign),
	kGradeToExec(toExec),
	isSigned(false)
{
	if (toSign > Bureaucrat::kMinGrade || toExec > Bureaucrat::kMinGrade)
		throw Form::GradeTooLowException();
	if  (toSign < Bureaucrat::kMaxGrade || toExec < Bureaucrat::kMaxGrade)
		throw Form::GradeTooHighException();
	cout << "Form " << kName << " created" << endl;
}
		
Form::Form(const Form& other):
	kName(other.kName),
	kGradeToSign(other.kGradeToSign),
	kGradeToExec(other.kGradeToExec),
	isSigned(false)
{
	cout << "Form " << kName << " created" << endl;
}

Form::~Form(void)
{
	cout << "Form " << kName << " destroyed" << endl;
}

Form&	Form::operator=(const Form& other)
{
	cout << "Form assignation called. Nothing to assign." << endl;
	if (this == &other) 
		return (*this); //utterly useless, but required by the task
	return (*this);
}

const string&	Form::GetName(void) const
{
	return (kName);
}

int	Form::GetGradeToSign(void) const
{
	return (kGradeToSign);
}

int	Form::GetGradeToExec(void) const
{
	return (kGradeToExec);
}

bool	Form::GetIsSigned(void) const
{
	return (isSigned);
}

void	Form::BeSigned(Bureaucrat& bur)
{
	if (isSigned)
	{
		cout << bur.GetName() << " couldn't sign form " << kName
			 << " since already signed" << endl;
		return ;
	}
	if (bur.GetGrade() > kGradeToSign)
		throw Form::GradeTooLowException();
	isSigned = true;	
	cout << "Form " << kName << " signed by " << bur.GetName() << endl;
}

void	Form::Execute(Bureaucrat const& executor) const
{
	if (!isSigned)
		throw Form::NotSignedException();
	if (executor.GetGrade() > kGradeToExec)
		throw Form::GradeTooLowException();
	this->FormAction();
	cout << "Form " << kName << " executed by " << executor.GetName() << endl;
}

const char* Form::GradeTooHighException::What(void) const throw()
{
	return ("Grade too high\n\n");
}
 
const char* Form::GradeTooLowException::What(void) const throw()
{
	return ("Grade too low\n\n");	
}

const char* Form::NotSignedException::What(void) const throw()
{
	return ("Form not signed\n\n");
}

ostream&	operator<<(ostream& os, const Form& item)
{
	os << "* Form " << item.GetName() << " *" << endl 
	   << "is signed:     " << std::boolalpha << item.GetIsSigned() << endl
	   << "grade to sign: " << item.GetGradeToSign() << endl
	   << "grade to exec: " << item.GetGradeToExec() << endl;
	return (os);
}
