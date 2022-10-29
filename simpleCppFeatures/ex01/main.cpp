#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	Zombie*	aZombie;

	cout << "Testing zombieHorde()" << endl;
	aZombie = zombieHorde(4, "Gans");
	for (int i = 0; i < 4; i++)
		aZombie[i].Announce();
	delete [] aZombie;
	aZombie = nullptr;//NULL
	return (0);
}
