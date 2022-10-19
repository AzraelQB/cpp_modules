#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

using std::string;

class Harl
{
	public:
		void	Complain(string level);

	private:
		void	Debug(void);
		void	Info(void);
		void	Warning(void);
		void	Error(void);
};

#endif
