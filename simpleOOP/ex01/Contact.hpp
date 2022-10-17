#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

using std::string;

class Contact
{
	public:
		enum	fields {
			FIRST_NAME = 0,
			LAST_NAME,
			NICKNAME,
			PHONE_NUMBER,
			DARKEST_SECRET,
			NUM_FIELDS
		};
		string	GetFieldName(int index);
		string	GetFieldInfo(int index);
		void	SetFieldInfo(int index, string toSet);
		void	PrintContact(void);
		void	PrintFieldHead(const int fieldNum);

	private:
		string	fieldNames[NUM_FIELDS] = {
			"First Name",
			"Last Name",
			"Nickname",
			"Phone Number",
			"Darkest Secret"
		};
		string	fieldInfo[NUM_FIELDS];
};

#endif