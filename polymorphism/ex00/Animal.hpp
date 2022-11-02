#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

using std::string;

class Animal 
{
	protected:
		string	type;
	
	public:
		Animal(void);
		Animal(const Animal& copy);
		virtual ~Animal(void);
	
		Animal&	operator=(const Animal& other);

		const string&	GetType(void) const;

		virtual void	MakeSound(void) const;
};

#endif