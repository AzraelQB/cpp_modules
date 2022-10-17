#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::stoi;

// PhoneBook::PhoneBook()
// {
// 	for (int i = 0; i < MAX_AMOUNT; i++)
// 	{
// 		contacts[i] = nullptr;
// 	}
// }

void PhoneBook::AddContact()
{
	string	info;

	if (amount < MAX_AMOUNT)
		++amount;
	if (curIndex == MAX_AMOUNT)
		curIndex = 0;
	for (int i = 0; i < Contact::NUM_FIELDS; i++)
	{
		cout << contacts[curIndex].GetFieldName(i) << ": ";
		getline(cin, info);
		contacts[curIndex].SetFieldInfo(i, info);
	}
	++curIndex;
}

void PhoneBook::DisplayAll() 
{
	string	tmp;

	for (int i = 0; i < amount; i++)
	{
		cout << setw(10);
		cout << i + 1;
		cout << '|' << setw(10);
		contacts[i].PrintFieldHead(Contact::FIRST_NAME);
		cout << '|' << setw(10);
		contacts[i].PrintFieldHead(Contact::LAST_NAME);
		cout << '|' << setw(10);
		contacts[i].PrintFieldHead(Contact::NICKNAME);
		cout << endl;
	}
}

void PhoneBook::SearchContact()
{
	string	input;
	int		toDisplay;

	DisplayAll();
	while (true)
	{
		cout << "Enter an index of a contact to display (1 - 8) or 0 to exit: ";
		getline(cin, input);
		if (input == "0")
			return ;
		try {
			toDisplay = stoi(input);
		} catch (std::invalid_argument) {
			toDisplay = -1;
		} catch (std::out_of_range) {
			toDisplay = -1;
		}
		if (toDisplay > 0 && toDisplay <= amount)
			break ;
		cout << "Invalid index!" << endl;
		cin.clear();
	}
	contacts[toDisplay - 1].PrintContact();
}
