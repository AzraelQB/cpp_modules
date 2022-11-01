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
	if (CheckHpEnergy("FT", "attack"))
		return ;
	--energy;
	cout << "FragTrap " << name << " attacks " << target << " causing "
		 << attackDmg << " points of damage!" << endl;
}

void	FragTrap::HighFivesGuys(void)
{
	if (CheckHpEnergy("FT", "give high five"))
		return ;
	cout << "FragTrap " << name << ": - YESSS, HIGH FIVE!!!" << endl;
}
