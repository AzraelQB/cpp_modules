#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <climits>

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::isprint;

bool	isNan(string literal)
{
	if (literal.substr(0, 3) == "nan" || literal.substr(0, 4) == "nanf")
		return (true);
	return (false);
}
  
void	ScalarConverter(string literal)
{
	int		toInt = atoi(literal.c_str());
	double	toDouble  = atof(literal.c_str());
	float	toFloat = static_cast<float>(toDouble);

	// single char
	if (literal.size() == 1 && isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		cout << "char: '" << literal[0] << "'" << endl;
		cout << "int: " << static_cast<int>(literal[0]) << endl;
		cout << "float: " << static_cast<float>(literal[0]) << ".0f" << endl;
		cout << "double: " << static_cast<double>(literal[0]) << ".0" << endl;
		return ;
	}
	// input is not a digit>
	if (toDouble == 0 && literal[0] != '0')
	{
		cout << "all conversions impossible" << endl;
		return ;
	}
	// input is a digit
	toInt = static_cast<int>(toDouble);
	if (toInt > 255 || toInt < 0)
		cout << "char: impossible" << endl;
	else if (!isprint(toInt))
		cout << "char: Non displayable" << endl;
	else
		cout << "char: '" << static_cast<char>(toInt) << "'" << endl;

	if (toDouble > INT_MAX || toDouble < INT_MIN || isNan(literal))
		cout << "int: impossible" << endl;
	else
		cout << "int: " << toInt << endl;

	if (toDouble - toInt == 0)
	{
		cout << "float: " << toFloat << ".0f" << endl;
		cout << "double: " << toDouble << ".0" << endl;
	}
	else
	{
		cout << "float: " << toFloat << "f" << endl;
		cout << "double: " << toDouble << endl;
	}
}
  
int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cerr << "Error: pass one literal as a parameter to the program" << endl;
		return (1);
	}
	ScalarConverter(argv[1]);
	return (0);
}  

	// special floating point conversions (nan, inf, etc.)
	// if (toInt == 0 && roundf(toDouble) != 0)
	// {
	// 	cout << "char: impossible" << endl;
	// 	cout << "int: impossible" << endl;
	// 	cout << "float: " << toFloat << "f" << endl;
	// 	cout << "double: " << toDouble << endl;
	// 	return ;
	// }