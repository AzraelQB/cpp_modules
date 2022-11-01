#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
{
	FragTrap first("Jotaro");
	FragTrap copy(first);

	first.Attack("someone");
	first.TakeDamage(5);
	first.TakeDamage(4);
	first.BeRepaired(5);
	first.TakeDamage(10);
	first.TakeDamage(100);
	first.Attack("someone");
	copy.Attack("Dio");
	copy.TakeDamage(5);
	copy.HighFivesGuys();
	for (int i = 0; i <= 50; ++i)
		copy.Attack("Dio");
	return (0);
}
