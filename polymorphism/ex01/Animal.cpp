#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

Animal::Animal(void): type("default") 
{
	cout << "Animal constructor called" << endl;
}

Animal::Animal(const Animal& copy)
{
	cout << "Animal copy constructor called" << endl;
	*this = copy;
}

Animal::~Animal(void) 
{
	cout << "Animal destructor called" << endl;
}
	
Animal&	Animal::operator=(const Animal& other)
{
	cout << "Animal assignment operator called" << endl;

	type = other.type;
	return (*this);
}

const string&	Animal::GetType(void) const
{
	return (type);
}

void Animal::MakeSound(void) const
{
	cout << "*Default animal sound*" << endl;
}
