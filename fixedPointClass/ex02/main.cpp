#include "Fixed.hpp"

using std::cout;
using std::endl;

int main(void) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << b << endl;
	cout << Fixed::Max(a, b) << endl;

	cout << "\nADDITIONAL TESTS:\n" << endl;
	{
		Fixed a(4);
		Fixed const b(2);
	
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	
		cout << "a++: " << a++ << endl;
		cout << "a: " << a << endl;
		cout << "++a: " << ++a << endl;
		cout << "a: " << a << endl;
	
		cout << "a + b: " << a + b << endl;
		cout << "b + a: " << b + a << endl;
	
		cout << "a - b: " << a - b << endl;
		cout << "b - a: " << b - a << endl;
	
		cout << "a * b: " << a * b << endl;
		cout << "b * a: " << b * a << endl;
	
		cout << "a / b: " << a / b << endl;
		cout << "b / a: " << b / a << endl;
	
		cout << "max(a, b): " << Fixed::Max(a, b) << endl;
		cout << "max(b, a): " << Fixed::Max(a, b) << endl;
	
		cout << "min(a, b): " << Fixed::Min(a, b) << endl;
		cout << "min(b, a): " << Fixed::Min(a, b) << endl;
		
		cout << "a != b: " << (a != b) << endl;
		cout << "a == b: " << (a == b) << endl;
		
		cout << "a <= b: " << (a <= b) << endl;
		cout << "a >= b: " << (a >= b) << endl;
		
		cout << "a < b: " << (a < b) << endl;
		cout << "a > b: " << (a > b) << endl;
	}
	return (0);
}
