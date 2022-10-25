#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

using std::string;

class ClapTrap 
{
	private:
		string	name;
		int		hitPts;
		int		energy;
		int		attackDmg;

	public:
		// Constructors
		ClapTrap(void);
		ClapTrap(string name);
		ClapTrap(const ClapTrap& copy);

		// Destructor
		~ClapTrap(void);

		// Overloaded operators
		ClapTrap&	operator=(const ClapTrap& other);
		
		// Other public functions
		void	Attack(const string& target);
		void	TakeDamage(unsigned int amount);
		void	BeRepaired(unsigned int amount);
};

#endif