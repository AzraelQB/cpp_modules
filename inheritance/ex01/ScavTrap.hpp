#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp" 

using std::string;

class ScavTrap : public ClapTrap
{
	public:
		// Constructors
		ScavTrap(void);
		ScavTrap(string name);
		ScavTrap(const ScavTrap& copy);

		// Destructor
		~ScavTrap(void);

		// Overloaded operators
		ScavTrap&	operator=(const ScavTrap& other);
		
		// Other public functions
		void	Attack(const string& target);
		void	GuardGate(void);
};

#endif