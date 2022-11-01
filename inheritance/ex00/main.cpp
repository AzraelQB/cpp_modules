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
	first.Attack("someone");
	copy.Attack("Dio");
	copy.TakeDamage(5);
	for (int i = 0; i <= 10; ++i)
		copy.Attack("Dio");
	return (0);
}
