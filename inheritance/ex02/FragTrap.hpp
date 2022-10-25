#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp" 

using std::string;

class FragTrap : public ClapTrap
{
	public:
		// Constructors
		FragTrap(void);
		FragTrap(string name);
		FragTrap(const FragTrap& copy);

		// Destructor
		~FragTrap(void);

		// Overloaded operators
		FragTrap&	operator=(const FragTrap& other);
		
		// Other public functions
		void	Attack(const string& target);
		void	HighFivesGuys(void);
};

#endif