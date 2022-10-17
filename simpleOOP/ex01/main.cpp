#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	PhoneBook	phonebook;
	string		input;

	cout << "Welcome to The Phonebook!" << endl;
	do
	{
		cout << "Enter ADD, SEARCH or EXIT: ";
		getline(cin, input);
		if (input == "ADD")
			phonebook.AddContact();
		else if (input == "SEARCH")
			phonebook.SearchContact();
		//cin.clear();
	} while (input != "EXIT");
	cout << "# Bye." << endl;
	return (0);
}
