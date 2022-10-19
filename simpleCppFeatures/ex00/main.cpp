#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

Zombie* newZombie(string name);
void	randomChump(string name);

int main(void)
{
	Zombie*	aZombie;

	cout << "Testing newZobie()" << endl;
	aZombie = newZombie("Gennady");
	aZombie->Announce();
	cout << "Testing randomChump()" << endl;
	randomChump("Hayao");
	delete aZombie;
	return (0);
}
