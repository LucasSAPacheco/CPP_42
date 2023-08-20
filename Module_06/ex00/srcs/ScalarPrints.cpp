#include "../includes/ScalarConverter.hpp"

void	ScalarConverter::printConversions()
{
	if (!_precision)
		_precision = 1;
	std::cout << std::fixed << std::setprecision(_precision);
	std::cout << "Detected type: " << _type << std::endl;
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void	ScalarConverter::printChar()
{
	std::cout <<  "char: " ;
	if (charOverflow())
		std::cout << "impossible" << std::endl;
	else if (!isDisplayableChar(_char))
		std::cout << "Non-displayable" << std::endl;
	else
		std::cout << _char << std::endl;
}

void	ScalarConverter::printInt()
{
	std::cout <<  "int: " ;
	if (intOverflow())
		std::cout << "impossible" << std::endl;
	else
		std::cout << _int << std::endl;
}

void	ScalarConverter::printFloat()
{
	std::cout <<  "float: " ;
	if (floatOverflow())
		std::cout << "impossible" << std::endl;
	else
		std::cout << _float << "f" << std::endl;
}

void	ScalarConverter::printDouble()
{
	std::cout <<  "double: " ;
	std::cout << _double << std::endl;
}

void	ScalarConverter::printPseudoLiteral()
{
	_type = "pseudo literal";
	std::cout << "Detected type: " << _type << std::endl
		<< "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: " << floatPseudoLiteral() << std::endl
		<< "double: " << doublePseudoLiteral() << std::endl;
}
