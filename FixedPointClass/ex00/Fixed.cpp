#include "Fixed.hpp"

using std::string;
using std::cout;
using std::endl;

Fixed::Fixed(void): val(0) 
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed& copy)
{
	cout << "Copy assignment operator called" << endl;
	this->val = copy.GetRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}

int	Fixed::GetRawBits(void) const
{
	cout << "GetRawBits member function called" << endl;
	return (this->val);
}

void Fixed::SetRawBits(const int raw)
{
	cout << "SetRawBits member function called" << endl;
	this->val = raw;
}
