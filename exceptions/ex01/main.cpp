#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout;
using std::endl;
using std::cerr;

int main(void)
{
	try 
	{
		Form form1("Blobing", 1110, 100);
	}
	catch (Form::GradeTooLowException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}
	catch (Form::GradeTooHighException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}

	try 
	{
		Form form2("Blobing", 0, 110);
	}
	catch (Form::GradeTooLowException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}
	catch (Form::GradeTooHighException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}

	try
	{
		Bureaucrat	bur1("Vasiliy", 100);
		Form		form3("Petition", 10, 10);
		bur1.SignForm(form3);
	}
	catch (Form::GradeTooLowException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}
	catch (Form::GradeTooHighException& e)
	{
		cerr << "\n\tERROR: " << e.What();
	}

	Bureaucrat	bur1("Dmitriy", 8);
	Form		form3("Petition", 10, 9);

	bur1.SignForm(form3);
	cout << form3;
	bur1.SignForm(form3);

	Form	form4(form3);
	cout << form4;
}