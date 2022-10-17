#include "Contact.hpp"

using std::cout;
using std::cin;
using std::string;	
using std::endl;

// Contact::Contact() {
// 	cout << "constr called" << std::endl;
// };

string Contact::GetFieldName(int index)
{
	return (fieldNames[index]);
}

string Contact::GetFieldInfo(int index)
{
	return (fieldInfo[index]);
}

void Contact::SetFieldInfo(int index, string toSet)
{
	fieldInfo[index] = toSet;
}

void Contact::PrintContact()
{
	for (int i = 0; i < NUM_FIELDS; i++)
		cout << GetFieldName(i) << ": " << GetFieldInfo(i) << endl;
}

void Contact::PrintFieldHead(const int fieldNum)
{
	string str;

	str = GetFieldInfo(fieldNum);
	if (str.length() > 10)
		cout << str.substr(0, 9) << ".";
	else
		cout << str;
}
