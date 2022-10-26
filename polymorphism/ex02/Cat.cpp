#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) 
{
	cout << "Cat default constructor called" << endl;
	type = "cat";
	mind = new Brain();
}

Cat::Cat(const Cat& copy)
{
	cout << "Cat copy constructor called" << endl;
	mind = new Brain();
	*this = copy;
}

Cat::~Cat(void) 
{
	cout << "Cat destructor called" << endl;
	delete mind;
}

Cat&	Cat::operator=(const Cat& other)
{
	cout << "Cat assignment operator called" << endl;
	type = other.type;
	*mind = *other.mind;
	return (*this);
}

Brain*	Cat::GetMind(void) const
{
	return (mind);
}

void Cat::MakeSound(void) const 
{
	cout << "- Meow!" << endl;
}
