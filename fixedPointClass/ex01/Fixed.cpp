#include "Fixed.hpp"

using std::cout;
using std::endl;
using std::ostream;

Fixed::Fixed(void): val(0) 
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int val): val(val << FRAC_BITS) 
{
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float val): val(roundf(val * (1 << FRAC_BITS)))
{
	cout << "Float constructor called" << endl;
}

Fixed::Fixed(const Fixed& copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

int	Fixed::GetRawBits(void) const
{
	return (this->val);
}

void Fixed::SetRawBits(const int raw)
{
	this->val = raw;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}

float	Fixed::ToFloat(void) const
{
	return ((float)this->GetRawBits() / (float)(1 << FRAC_BITS));
}

int		Fixed::ToInt(void) const
{
	return (this->GetRawBits() >> FRAC_BITS);
}

Fixed&	Fixed::operator=(const Fixed& num)
{
	cout << "Copy assignment operator called" << endl;
	this->val = num.GetRawBits();
	return (*this);
}

ostream&	operator<<(ostream& os, const Fixed& num)
{
	os << num.ToFloat();
	return (os);
}


