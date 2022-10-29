#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanB 
{
	public:
		HumanB(string name);
		void	Attack();
		void	SetWeapon(Weapon& aWeapon);

	private:
		string	name;
		Weapon*	weapon;
};

#endif