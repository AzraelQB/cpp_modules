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
	first.TakeDamage(10);
	copy.Attack("Dio");
	copy.TakeDamage(5);
	copy.HighFivesGuys();
	return (0);
}
