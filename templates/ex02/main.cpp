#include "Array.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::exception;

int main() {
	Array<int>		arrInt(5);
	Array<char>		arrChar(5);
	Array<string>	arrString(3);

	arrInt[0] = -2;
	arrInt[1] = -1;
	arrInt[2] = 0;
	arrInt[3] = 1;
	arrInt[4] = 100;

	arrChar[0] = '2';
	arrChar[1] = ' ';
	arrChar[2] = '[';
	arrChar[3] = 'a';
	arrChar[4] = '!';

	arrString[0] = "aboba";
	arrString[1] = "memes";
	arrString[2] = "";

	cout << "int arr:" << endl;
	cout << "size: " << arrInt.size() << '\n' << endl;
	for (size_t i = 0; i < arrInt.size(); ++i)
		cout << arrInt[i] << endl;

	cout << "\nchar arr:" << endl;
	cout << "size: " << arrChar.size() << '\n' << endl;
	for (size_t i = 0; i < arrChar.size(); ++i)
		cout << arrChar[i] << endl;

	cout << "\nstring arr:" << endl;
	cout << "size: " << arrString.size() << '\n' << endl;
	for (size_t i = 0; i < arrString.size(); ++i)
		cout << arrString[i] << endl;

	cout << "\n* Exceptions *\n";

	try {
		cout << arrString[-1] << endl;
	} catch (exception& e) {
		cerr << e.what() << endl;
	}
	try {
		cout << arrString[5] << endl;
	} catch (exception& e) {
		cerr << e.what() << endl;
	}

	cout << "\n* Copy constructor *\n";

	Array<string> copy(arrString);
	cout << "\nstring arr:" << endl;
	cout << "size: " << arrString.size() << '\n' << endl;
	for (size_t i = 0; i < arrString.size(); ++i)
		cout << arrString[i] << endl;
	cout << "\ncopy arr:" << endl;
	cout << "size: " << copy.size() << '\n' << endl;
	for (size_t i = 0; i < copy.size(); ++i)
		cout << copy[i] << endl;

	cout << "\n change string arr[2] to \"anime\"" << endl;
	arrString[2] = "anime";

	cout << "\nstring arr:" << endl;
	cout << "size: " << arrString.size() << '\n' << endl;
	for (size_t i = 0; i < arrString.size(); ++i) {
		cout << arrString[i] << endl;
	}
	cout << "\ncopy arr:" << endl;
	cout << "size: " << copy.size() << '\n' << endl;
	for (size_t i = 0; i < copy.size(); ++i) {
		cout << copy[i] << endl;
	}

	cout << "\n* Ass operator *\n";

	Array<string> copy2(5);
	cout << "\nstring arr:" << endl;
	cout << "size: " << arrString.size() << '\n' << endl;
	for (size_t i = 0; i < arrString.size(); ++i) {
		cout << arrString[i] << endl;
	}
	cout << "\ncopy arr:" << endl;
	cout << "size: " << copy2.size() << '\n' << endl;
	for (size_t i = 0; i < copy2.size(); ++i) {
		cout << copy2[i] << endl;
	}

	cout << "\ncopy = string arr" << endl;
	copy2 = arrString;

	cout << "\nstring arr:" << endl;
	cout << "size: " << arrString.size() << '\n' << endl;
	for (size_t i = 0; i < arrString.size(); ++i) {
		cout << arrString[i] << endl;
	}
	cout << "\ncopy arr:" << endl;
	cout << "size: " << copy2.size() << '\n' << endl;
	for (size_t i = 0; i < copy2.size(); ++i) {
		cout << copy2[i] << endl;
	}

	cout << "\nchanged string arr[1] to \"1228\"" << endl;
	arrString[1] = "1228";

	cout << "\nstring arr:" << endl;
	cout << "size: " << arrString.size() << '\n' << endl;
	for (size_t i = 0; i < arrString.size(); ++i)
		cout << arrString[i] << endl;
	cout << "\ncopy arr:" << endl;
	cout << "size: " << copy2.size() << '\n' << endl;
	for (size_t i = 0; i < copy2.size(); ++i)
		cout << copy2[i] << endl;

	return (0);
}
