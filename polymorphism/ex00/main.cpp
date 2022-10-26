#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* teta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << j->GetType() << " " << std::endl;
	std::cout << i->GetType() << " " << std::endl;
	i->MakeSound(); //will output the cat sound!
	j->MakeSound();
	meta->MakeSound();
	teta->MakeSound();
	k->MakeSound();
	delete meta;
	delete j;
	delete i;
	delete teta;
	delete k;
	return 0;
}
