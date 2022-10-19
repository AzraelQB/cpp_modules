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
	delete [] aZombie;
	aZombie = nullptr;
	return (0);
}
