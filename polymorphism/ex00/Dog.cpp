#include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog(void)
{
	type = "dog";
	cout << "Dog default constructor called" << endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
	cout << "Dog copy constructor called" << endl;
}

Dog::~Dog(void)
{
	cout << "Dog destructor called" << endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	cout << "Dog assignment operator called" << endl;

	type = other.type;
	return (*this);
}

void Dog::MakeSound() const 
{
	cout << "- Bark!" << endl;
}
