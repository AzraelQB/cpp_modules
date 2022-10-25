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

void	ClapTrap::Attack(const string& target)
{
	if (hitPts <= 0)
		cout << "ClapTrap " << name << " can't attack since it's ded" << endl;
	else if (energy <= 0)
		cout << "ClapTrap " << name << " can't attack since no energy" << endl;
	else
	{
		--energy;
		cout << "ClapTrap " << name << " attacks " << target << " causing ";
		cout << attackDmg << " points of damage!" << endl;
	}
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
		cout << "ClapTrap " << name << " takes " << amount;
		cout << " points of damage. " << endl;
		cout << "Now it has " << hitPts << " hp left" << endl;
	}
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if (hitPts <= 0)
		cout << "ClapTrap " << name << " can't repair since it's ded" << endl;
	else if (energy <= 0)
		cout << "ClapTrap " << name << " can't repair since no energy" << endl;
	else
	{
		--energy;
		hitPts += amount;
		cout << "ClapTrap " << name << " repairs itself for " << amount;
		cout << " hp." << endl;
		cout << "Now it has " << hitPts << " hp" << endl;
	}
}
