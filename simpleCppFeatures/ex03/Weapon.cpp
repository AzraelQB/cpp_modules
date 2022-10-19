#include "Weapon.hpp"

Weapon::Weapon(const string type): type(type) {}

const string&	Weapon::GetType(void)
{
	return (type);
}

void	Weapon::SetType(string type)
{
	this->type = type;
}
