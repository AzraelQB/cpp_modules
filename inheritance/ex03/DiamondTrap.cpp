#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(void): name("default")
{
	ClapTrap::name = "default_clap_name";
	hitPts = FragTrap::hitPts;
	energy = ScavTrap::energy;
	attackDmg = FragTrap::attackDmg;
	cout << "DT default constructor called" << endl;
}

DiamondTrap::DiamondTrap(string name): name(name)
{
	ClapTrap::name = name.append("_clap_name");
	hitPts = FragTrap::hitPts;
	energy = ScavTrap::energy;
	attackDmg = FragTrap::attackDmg;
	cout << "DT constructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	cout << "DT copy constructor called" << endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "DT destructor called" << endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	cout << "DT copy assignment operator called" << endl;
	name = other.name;
	ClapTrap::name = other.ClapTrap::name;
	hitPts = other.hitPts;
	energy = other.energy;
	attackDmg = other.attackDmg;
	return (*this);
}

void	DiamondTrap::Attack(const string& target)
{
	ScavTrap::Attack(target);
}

void	DiamondTrap::WhoAmI(void)
{
	if (CheckHpEnergy("DT", "introduce itself"))
		return ;
	cout << "I am DiamondTrap " << name << ", aka " << ClapTrap::name << endl;
}
