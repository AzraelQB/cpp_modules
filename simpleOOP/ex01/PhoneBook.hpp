#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

using std::string;

class PhoneBook
{
	public:
		static	const int MAX_AMOUNT = 8;
		void	AddContact(void);
		void 	SearchContact(void);
		void 	DisplayAll(void);

	private:
		Contact	contacts[MAX_AMOUNT];
		int		amount = 0;
		int		curIndex = 0;
};

#endif