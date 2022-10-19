#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
//# include <string>

using std::string;

class Zombie 
{
	public:
		Zombie(string name);
		~Zombie();
		void	Announce(void);

	private:
		string	name;
};

#endif