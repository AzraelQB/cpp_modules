#include "WrongAnimal.hpp"

using std::string;
using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(void): type("default") 
{
	cout << "WrongAnimal constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	cout << "WrongAnimal copy constructor called" << endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
	cout << "WrongAnimal destructor called" << endl;
}
	
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	cout << "WrongAnimal assignment operator called" << endl;
	type = other.type;
	return (*this);
}

const string&	WrongAnimal::GetType(void) const
{
	return (type);
}

void WrongAnimal::MakeSound(void) const
{
	cout << "*Default wrong animal sound*" << endl;
}
