#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

using std::string;

class WrongAnimal 
{
	protected:
		string	type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& copy);
		virtual	~WrongAnimal(void);
	
		WrongAnimal&	operator=(const WrongAnimal& other);

		const string&	GetType(void) const;

		void	MakeSound(void) const;
};

#endif