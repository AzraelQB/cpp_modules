#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::cerr;

Bureaucrat::Bureaucrat(void):
	kName("unnamed"),
	grade(kMinGrade)
{
	cout << kName << " created with grade " << grade << endl;
}

Bureaucrat::Bureaucrat(const string& name, const int grade):
	kName(name)
{
	try 
	{
		SetGrade(grade);
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		cerr << "\n\tERROR: " << e.What();
		cerr << "Grade set to kMinGrade" << endl;
		this->grade = kMinGrade;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		cerr << "\n\tERROR: " << e.What();
		cerr << "Grade set to kMaxGrade" << endl;
		this->grade = kMaxGrade;
	}
	cout << kName << " created with grade " << this->grade  << endl;
}
		
Bureaucrat::Bureaucrat(const Bureaucrat& other):
	kName(other.kName)
{
	*this = other;
	cout << kName << " created with grade " << grade << endl;
}

Bureaucrat::~Bureaucrat(void)
{
	cout << kName << " destroyed" << endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	grade = other.grade;

	cout << kName << " acquired grade " << grade << " from " << other.kName << endl;
	return (*this);
}

const string& Bureaucrat::GetName(void) const
{
	return(kName);
}

int Bureaucrat::GetGrade(void) const
{
	return (grade);
}

void Bureaucrat::SetGrade(int grade)
{
	if (grade > kMinGrade)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < kMaxGrade)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

void	Bureaucrat::IncrementGrade()
{
	try 
	{
		SetGrade(grade - 1);
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}
}

void	Bureaucrat::DecrementGrade()
{
	try 
	{
		SetGrade(grade + 1);
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}
}

const char* Bureaucrat::GradeTooHighException::What(void) const throw()
{
	return ("Grade can not be more than 1\n\n");
}
 
const char* Bureaucrat::GradeTooLowException::What(void) const throw()
{
	return ("Grade can not be less than 150\n\n");	
}

ostream&	operator<<(ostream& os, const Bureaucrat& item)
{
	os << item.GetName() << ", bureaucrat grade " << item.GetGrade();
	return (os);
}
