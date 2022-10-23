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

Fixed	Fixed::operator+(const Fixed& num)
{
	Fixed res(this->GetRawBits() + num.GetRawBits());

	return (res);
}

Fixed	Fixed::operator-(const Fixed& num)
{
	Fixed res(this->GetRawBits() - num.GetRawBits());

	return (res);
}

Fixed	Fixed::operator*(const Fixed& num)
{
	Fixed res(this->ToFloat() * num.ToFloat());

	return (res);
}

Fixed	Fixed::operator/(const Fixed& num)
{
	Fixed	res(this->ToFloat() / num.ToFloat());

	return (res);
}

Fixed&	Fixed::operator++(void)
{
	this->SetRawBits(this->GetRawBits() + 1);
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->SetRawBits(this->GetRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);

	++*this;
	return (copy);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);

	--*this;
	return (copy);
}

bool	Fixed::operator>(const Fixed& num) const
{
	return (this->GetRawBits() > num.GetRawBits());
}

bool	Fixed::operator<(const Fixed& num) const
{
	return (this->GetRawBits() < num.GetRawBits());
}

bool	Fixed::operator>=(const Fixed& num) const
{
	return (this->GetRawBits() >= num.GetRawBits());
}

bool	Fixed::operator<=(const Fixed& num) const
{
	return (this->GetRawBits() <= num.GetRawBits());
}

bool	Fixed::operator==(const Fixed& num) const
{
	return (this->GetRawBits() == num.GetRawBits());
}

bool	Fixed::operator!=(const Fixed& num) const
{
	return (this->GetRawBits() != num.GetRawBits());
}

const Fixed&	Fixed::Min(const Fixed& numOne, const Fixed& numTwo)
{
	if (numOne > numTwo)
		return (numTwo);
	return (numOne);
}

const Fixed&	Fixed::Max(const Fixed& numOne, const Fixed& numTwo)
{
	if (numOne > numTwo)
		return (numOne);
	return (numTwo);
}

ostream&	operator<<(ostream& os, const Fixed& num)
{
	os << num.ToFloat();
	return (os);
}
