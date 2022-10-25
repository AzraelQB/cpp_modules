#include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap(void): ClapTrap()
{
	hitPts = 100;
	energy = 50;
	attackDmg = 20;
	cout << "ST default constructor called" << endl;
}

ScavTrap::ScavTrap(string name): ClapTrap(name)
{
	hitPts = 100;
	energy = 50;
	attackDmg = 20;
	cout << "ST constructor called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	cout << "ST copy constructor called" << endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	cout << "ST destructor called" << endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	cout << "ST copy assignment operator called" << endl;
	name = other.name;
	hitPts = other.hitPts;
	energy = other.energy;
	attackDmg = other.attackDmg;
	return (*this);
}

void	ScavTrap::Attack(const string& target)
{
	if (hitPts <= 0)
		cout << "ScavTrap " << name << " can't attack since it's ded" << endl;
	else if (energy <= 0)
		cout << "ScavTrap " << name << " can't attack since no energy" << endl;
	else
	{
		--energy;
		cout << "ScavTrap " << name << " attacks " << target << " causing ";
		cout << attackDmg << " points of damage!" << endl;
	}
}

void	ScavTrap::GuardGate(void)
{
	cout << "ScavTrap " << name << " is now in Gate keeper mode" << endl;
}
