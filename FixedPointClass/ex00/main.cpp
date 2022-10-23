#include "Fixed.hpp"

using std::cout;
using std::endl;

int main(void) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	cout << a.GetRawBits() << endl;
	cout << b.GetRawBits() << endl;
	cout << c.GetRawBits() << endl;
	return (0);
}
