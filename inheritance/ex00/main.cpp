#include "ClapTrap.hpp"

int main(void) 
{
	ClapTrap first("Jotaro");
	ClapTrap copy(first);

	first.Attack("someone");
	first.TakeDamage(5);
	first.TakeDamage(4);
	first.BeRepaired(5);
	first.TakeDamage(10);
	first.TakeDamage(10);
	copy.Attack("Dio");
	copy.TakeDamage(5);
	return (0);
}
