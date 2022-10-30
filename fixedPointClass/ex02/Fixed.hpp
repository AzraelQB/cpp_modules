#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

using std::ostream;

class Fixed 
{
	private:
		static const int	FRAC_BITS = 8;
		int					val;

	public:
		// Constructors
		Fixed(void);
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed& copy);

		// Destructors
		~Fixed(void);

		// Overloaded operators
		Fixed&	operator=(const Fixed& copy);
		Fixed	operator+(const Fixed& num) const;
		Fixed	operator-(const Fixed& num) const;
		Fixed	operator*(const Fixed& num) const;
		Fixed	operator/(const Fixed& num) const;
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		bool	operator>(const Fixed& num) const;
		bool	operator<(const Fixed& num) const;
		bool	operator>=(const Fixed& num) const;
		bool	operator<=(const Fixed& num) const;
		bool	operator==(const Fixed& num) const;
		bool	operator!=(const Fixed& num) const;

		// Getters & setters
		int		GetRawBits(void) const;
		void	SetRawBits(const int raw);
		
		// Conversions
		float	ToFloat(void) const;
		int		ToInt(void) const;

		// Other public functions
		static const Fixed&	Min(const Fixed& numOne, const Fixed& numTwo);
		static const Fixed&	Max(const Fixed& numOne, const Fixed& numTwo);
		static Fixed&		Min(Fixed& numOne, Fixed& numTwo);
		static Fixed&		Max(Fixed& numOne, Fixed& numTwo);
};

// Overloaded ostream
ostream&	operator<<(ostream& os, const Fixed& num);

#endif