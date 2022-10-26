#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

using std::string;

class Brain 
{
	private:
		static const int	MAX_IDEAS = 100;
		string				ideas[MAX_IDEAS];

	public:
		Brain(void);
		Brain(const Brain& copy);
		~Brain(void);

		Brain&	operator=(const Brain& other);
};

#endif