#include <iostream>
#include "Data.hpp"

using std::cout;
using std::endl;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
  
int main()
{
	Data*		data;
	Data*		retData;
	uintptr_t	rawData;

	data = new Data;
	std::cout << "Data             : " << data << std::endl;
	rawData = serialize(data);
	std::cout << "Raw data         : " << rawData << std::endl;
	retData = deserialize(rawData);
	std::cout << "Deserialized data: " << retData << std::endl;

	delete data;
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