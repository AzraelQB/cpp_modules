#include "Zombie.hpp"

using std::string;

void	randomChump(string name)
{
	Zombie aZombie(name);

	aZombie.Announce();
}
