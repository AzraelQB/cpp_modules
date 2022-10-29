#include "HumanB.hpp"

HumanB::HumanB(string name): name(name), weapon(nullptr) {}//NULL

void	HumanB::Attack()
{
	if (weapon)
		cout << name << " attacks with their " << weapon->GetType() << endl;
	else
		cout << name << " attacks with their bare fists!" << endl;
}

void	HumanB::SetWeapon(Weapon& aWeapon)
{
	weapon = &aWeapon;
}
