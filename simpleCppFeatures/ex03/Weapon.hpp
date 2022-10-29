#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Weapon 
{
	public:
		Weapon(const string type);
		const string&	GetType(void);
		void			SetType(string type);

	private:
		string	type;
};

#endif