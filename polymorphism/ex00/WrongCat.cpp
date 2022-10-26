#include "WrongCat.hpp"

using std::cout;
using std::endl;

WrongCat::WrongCat(void) 
{
	this->type = "WrongCat";

	cout << "WrongCat default constructor called" << endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
	cout << "WrongCat copy constructor called" << endl;
}

WrongCat::~WrongCat() {
	cout << "WrongCat destructor called" << endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	cout << "WrongCat assignment operator called" << endl;

	type = other.type;
	return (*this);
}

void WrongCat::MakeSound() const {
	cout << "- Wrong Meow!" << endl;
}
