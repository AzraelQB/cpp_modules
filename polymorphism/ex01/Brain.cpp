#include "Brain.hpp"		

using std::cout;
using std::endl;

Brain::Brain(void)
{
	cout << "Brain constructor called" << endl;
}

Brain::Brain(const Brain& copy)
{
	cout << "Brain copy constructor called" << endl;
	*this = copy;
}

Brain::~Brain(void)
{
	cout << "Brain destructor called" << endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	cout << "Brain assignment operator called" << endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		if (other.ideas[i].length() > 0)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}