#include <iostream>

#include "iter.hpp"

using std::cout;
using std::endl;
using std::string;

template<typename T>
void toCout(T& var) {
	cout << var << " ";
}

template<typename T>
void increment(T& var) {
	++var;
}

template<typename T>
void addC(T& var) {
	var += "c";
}

int main() {
	int arrInt[6] = {0, 12, 4, 43, 23, -5};
	string arrString[3] = {"aboba", "memes", "432"};

	::iter(arrInt, 6, &toCout);
	cout << endl;
	::iter(arrInt, 6, &increment);
	::iter(arrInt, 6, &toCout);
	cout << endl;

	::iter(arrString, 3, &toCout);
	cout << endl;
	::iter(arrString, 3, &addC);
	::iter(arrString, 3, &toCout);
	cout << endl;
	return 0;
}
