#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
	private:
		static const int	FRAC_BITS = 8;
		int					val;

	public:
		Fixed(void);
		Fixed(const& Fixed copy);
		~Fixed(void);

		Fixed&	operator=(const& Fixed copy);

		int		GetRawBits(void) const;
		void	SetRawBits(const int raw);
};

#endif