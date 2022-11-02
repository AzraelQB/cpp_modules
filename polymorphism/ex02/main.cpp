#include "Cat.hpp"
#include "Dog.hpp"

using std::cout;
using std::endl;

int main(void)
{
	//Animal newAnimal;
	Cat* b	= new Cat();
	Cat* c	= new Cat(*b);
	Cat* d	= new Cat();
	Animal*	meta[10];

	cout << endl;
	cout << "Deep copy test: copy constructor" << endl;
	cout << &b << ' ' << &c << endl;
	cout << b->GetMind() << ' ' << c->GetMind() << endl;
	*d = *c;
	cout << "Deep copy test: ass operator" << endl;
	cout << &d << ' ' << &c << endl;
	cout << d->GetMind() << ' ' << c->GetMind() << endl;
	cout << endl;
	delete d;
	cout << &c << ' ' << c->GetMind() << endl;
	delete b;
	delete c;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
		delete meta[i];
	return 0;
}
