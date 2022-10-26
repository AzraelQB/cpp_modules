#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal 
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& copy);
		~WrongCat(void);

		WrongCat& operator=(const WrongCat& other);

		void MakeSound(void) const;
};

#endif