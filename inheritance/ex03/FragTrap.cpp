#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap(void): ClapTrap()
{
	hitPts = 100;
	energy = 50;
	attackDmg = 30;
	cout << "FT default constructor called" << endl;
}

FragTrap::FragTrap(string name): ClapTrap(name)
{
	hitPts = 100;
	energy = 50;
	attackDmg = 30;
	cout << "FT constructor called" << endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	cout << "FT copy constructor called" << endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	cout << "FT destructor called" << endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	cout << "FT copy assignment operator called" << endl;
	name = other.name;
	hitPts = other.hitPts;
	energy = other.energy;
	attackDmg = other.attackDmg;
	return (*this);
}

void	FragTrap::Attack(const string& target)
{
	if (hitPts <= 0)
		cout << "FragTrap " << name << " can't attack since it's ded" << endl;
	else if (energy <= 0)
		cout << "FragTrap " << name << " can't attack since no energy" << endl;
	else
	{
		--energy;
		cout << "FragTrap " << name << " attacks " << target << " causing ";
		cout << attackDmg << " points of damage!" << endl;
	}
}

void	FragTrap::HighFivesGuys(void)
{
	cout << "FragTrap " << name << ": - YESSS, HIGH FIVE!!!" << endl;
}
