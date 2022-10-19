#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanA 
{
	public:
		HumanA(string name, Weapon& aWeapon);
		void	Attack();

	private:
		string	name;
		Weapon*	weapon;
};

#endif