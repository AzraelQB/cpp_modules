#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp" 
# include "FragTrap.hpp" 

using std::string;

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		string	name;

	public:
		// Constructors
		DiamondTrap(void);
		DiamondTrap(string name);
		DiamondTrap(const DiamondTrap& copy);

		// Destructor
		~DiamondTrap(void);

		// Overloaded operators
		DiamondTrap&	operator=(const DiamondTrap& other);
		
		// Other public functions
		void	Attack(const string& target);
		void	WhoAmI(void);
};

#endif