#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

using std::string;

class Animal 
{
	private:
		Animal(void);
		Animal(const Animal& copy);

	protected:
		string	type;
	
	public:	
		virtual ~Animal(void);
	
		Animal&	operator=(const Animal& other);

		const string&	GetType(void) const;

		virtual void	MakeSound(void) const = 0;
};

#endif