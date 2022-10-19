#include "Zombie.hpp"

using std::string;

// Zombie* zombieHorde(int N, string name)
// {
// 	Zombie *horde = new Zombie[N];

// 	for (int i = 0; i < N; ++i)
// 	{
// 		horde[i].SetName(name);
// 		horde[i].Announce();
// 	}
// 	//delete [] (horde + 1);
// 	return (horde);
// }

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].SetName(name);
		horde[i].Announce();
	}
	return (horde);
}
