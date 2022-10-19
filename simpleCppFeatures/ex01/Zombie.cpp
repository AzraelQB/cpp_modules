#include "Zombie.hpp"

using std::string;
using std::cout;
using std::endl;

Zombie::Zombie(string name): name(name) 
{
	cout << name << ": constructor called" << endl;
}

Zombie::Zombie(void)
{
	this->name = "Unnamed";
	cout << this->name << ": constructor called" << endl;
}

Zombie::~Zombie()
{
	cout << name << ": destructor called" << endl;
}

void	Zombie::Announce()
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::SetName(string name)
{
	this->name = name;
}

