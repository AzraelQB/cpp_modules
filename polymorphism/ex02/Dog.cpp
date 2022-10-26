#include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog(void)
{
	cout << "Dog default constructor called" << endl;
	type = "dog";
	mind = new Brain();
}

Dog::Dog(const Dog& copy)
{
	cout << "Dog copy constructor called" << endl;
	mind = new Brain();
	*this = copy;
}

Dog::~Dog(void)
{
	cout << "Dog destructor called" << endl;
	delete mind;
}

Dog&	Dog::operator=(const Dog& other)
{
	cout << "Dog assignment operator called" << endl;
	type = other.type;
	*mind = *(other.mind);
	return (*this);
}

Brain*	Dog::GetMind(void) const
{
	return (mind);
}

void Dog::MakeSound(void) const 
{
	cout << "- Bark!" << endl;
}
