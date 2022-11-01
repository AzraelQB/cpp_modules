#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap(void): 
	name("default"), 
	hitPts(10), 
	energy(10), 
	attackDmg(0)
{
	cout << "CT default constructor called" << endl;
}

ClapTrap::ClapTrap(string name): 
	name(name), 
	hitPts(10), 
	energy(10), 
	attackDmg(0)
{
	cout << "CT constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	cout << "CT copy constructor called" << endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	cout << "CT destructor called" << endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	cout << "CT copy assignment operator called" << endl;
	this->name = other.name;
	this->hitPts = other.hitPts;
	this->energy = other.energy;
	this->attackDmg = other.attackDmg;
	return (*this);
}

bool	ClapTrap::CheckHpEnergy(string type, string job)
{
	if (hitPts <= 0)
	{
		cout << type << ' ' << name << " can't " << job << " since it's ded" << endl;
		return (true);
	}
	else if (energy <= 0)
	{
		cout << type << ' ' << name << " can't " << job << " since no energy" << endl;
		return (true);
	}
	return (false);
}

void	ClapTrap::Attack(const string& target)
{
	if (CheckHpEnergy("CT", "attack"))
		return ;
	--energy;
	cout << "ClapTrap " << name << " attacks " << target << " causing "
		 << attackDmg << " points of damage!" << endl;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	if (hitPts <= 0)
		cout << "ClapTrap " << name << " is already ded" << endl;
	else
	{
		hitPts -= amount;
		if (hitPts < 0)
			hitPts = 0;
		cout << "ClapTrap " << name << " takes " << amount
			 << " points of damage. " << endl
			 << "Now it has " << hitPts << " hp left" << endl;
	}
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if (CheckHpEnergy("CT", "repair"))
		return ;
	--energy;
	hitPts += amount;
	cout << "ClapTrap " << name << " repairs itself for " << amount
		 << " hp." << endl 
		 << "Now it has " << hitPts << " hp" << endl;
}
