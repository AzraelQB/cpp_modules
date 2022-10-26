#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) 
{
	type = "cat";
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	cout << "Cat copy constructor called" << endl;
}

Cat::~Cat() 
{
	cout << "Cat destructor called" << endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	cout << "Cat assignment operator called" << endl;

	type = other.type;
	return (*this);
}

void Cat::MakeSound() const 
{
	cout << "- Meow!" << endl;
}
