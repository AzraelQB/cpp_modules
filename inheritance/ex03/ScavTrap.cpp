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
	if (CheckHpEnergy("ST", "attack"))
		return ;
	--energy;
	cout << "ScavTrap " << name << " attacks " << target << " causing "
		 << attackDmg << " points of damage!" << endl;
}

void	ScavTrap::GuardGate(void)
{
	if (CheckHpEnergy("ST", "gatekeep"))
		return ;
	cout << "ScavTrap " << name << " is now in Gate keeper mode" << endl;
}
