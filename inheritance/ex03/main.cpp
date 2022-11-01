#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) 
{
	DiamondTrap first("Jotaro");
	DiamondTrap copy(first);
	// int x = 10;
	// x++;
	// {
	// 	int x = 34;
	// 	x++;
	// }

	first.Attack("someone");
	first.TakeDamage(5);
	first.TakeDamage(4);
	first.BeRepaired(5);
	first.TakeDamage(10);
	first.TakeDamage(100);
	first.Attack("someone");
	copy.Attack("Dio");
	copy.TakeDamage(5);
	copy.WhoAmI();
	for (int i = 0; i <= 50; ++i)
		copy.Attack("Dio");
	return (0);
}
