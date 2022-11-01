#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) 
{
	ScavTrap first("Jotaro");
	ScavTrap copy(first);

	first.Attack("someone");
	first.TakeDamage(5);
	first.TakeDamage(4);
	first.BeRepaired(5);
	first.TakeDamage(10);
	first.TakeDamage(100);
	first.Attack("someone");
	copy.Attack("Dio");
	copy.TakeDamage(5);
	copy.GuardGate();
	for (int i = 0; i <= 50; ++i)
		copy.Attack("Dio");
	return (0);
}
