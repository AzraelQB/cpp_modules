#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal 
{
	private:
		Brain* mind;

	public:
		Cat(void);
		Cat(const Cat& copy);
		~Cat(void);

		Cat& operator=(const Cat& other);

		Brain*	GetMind(void) const;
		
		void MakeSound(void) const /*override*/;
};

#endif
