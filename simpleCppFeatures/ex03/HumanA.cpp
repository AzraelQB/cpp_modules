#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& aWeapon): name(name), weapon(&aWeapon) {}

void	HumanA::Attack()
{
	cout << name << " attacks with their " << weapon->GetType() << endl;
}
