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
		Fixed(void);
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed& copy);
		~Fixed(void);

		Fixed&	operator=(const Fixed& copy);
	
		int		GetRawBits(void) const;
		void	SetRawBits(const int raw);
		float	ToFloat(void) const;
		int		ToInt(void) const;
};

ostream&	operator<<(ostream& os, const Fixed& num);

#endif