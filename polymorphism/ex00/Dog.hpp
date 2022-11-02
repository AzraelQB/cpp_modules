#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal 
{
	public:
		Dog(void);
		Dog(const Dog& copy);
		~Dog(void);

		Dog& operator=(const Dog& other);

		void MakeSound(void) const /*override*/;
};

#endif
