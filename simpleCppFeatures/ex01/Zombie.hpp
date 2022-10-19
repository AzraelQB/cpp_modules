#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

using std::string;

class Zombie 
{
	public:
		Zombie(void);
		Zombie(string name);
		~Zombie();
		void	Announce(void);
		void	SetName(string name);

	private:
		string	name;
};

#endif