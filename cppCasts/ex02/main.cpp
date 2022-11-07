#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

Base* generate() 
{
	srand(time(NULL));

	int n = rand() % 3;
	switch (n) 
	{
		case 0:
			cout << "A class generated" << endl;
			return new A;
		case 1:
			cout << "B class generated" << endl;
			return new B;
		case 2:
			cout << "C class generated" << endl;
			return new C;
	}
	return (NULL);
}

void identify(Base* p) 
{
	if (dynamic_cast<A*>(p) != NULL) 
		cout << "A class was identified" << endl;
	else if (dynamic_cast<B*>(p) != NULL)
		cout << "B class was identified" << endl;
	else if (dynamic_cast<C*>(p) != NULL)
		cout << "C class was identified" << endl;
	else
		cout << "Can't identify the class" << endl;
}

void identify(Base& p) 
{
	try 
	{
		A& descendant = dynamic_cast<A&>(p); 
		(void)descendant; // Needed by subject
		cout << "A class was identified" << endl;
		return;
	} catch (std::exception &e) {}

	try 
	{
		B& descendant = dynamic_cast<B&>(p); 
		(void)descendant;
		cout << "B class was identified" << endl;
		return;
	} catch (std::exception &e) {}

	try 
	{
		C& descendant = dynamic_cast<C&>(p); 
		(void)descendant;
		cout << "C class was identified" << endl;
		return;
	} catch (std::exception &e) {}

	cout << "Can't identify the class" << endl;
}

int main(void) 
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);
	return (0);
}
