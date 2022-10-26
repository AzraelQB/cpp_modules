#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal 
{
	private:
		Brain* mind;

	public:
		Dog(void);
		Dog(const Dog& copy);
		~Dog(void);

		Dog& operator=(const Dog& other);

		Brain*	GetMind(void) const;

		void MakeSound(void) const override;
};

#endif
