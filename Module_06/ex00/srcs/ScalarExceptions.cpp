#include "../includes/ScalarConverter.hpp"

bool	ScalarConverter::intOverflow()
{
	if (_double < std::numeric_limits<int>::min()
		|| _double > std::numeric_limits<int>::max())
		return true;
	return false;
}

bool	ScalarConverter::floatOverflow()
{
	double	float_max = std::numeric_limits<float>::max();
	if (_double < -float_max || _double > float_max)
		return true;
	return false;
}

bool	ScalarConverter::charOverflow()
{
	if (_double < std::numeric_limits<char>::min()
		|| _double > std::numeric_limits<char>::max())
		return true;
	return false;
}

const char*	ScalarConverter::InvalidTypeException::what() const throw() {
	return "INVALID TYPE";
}

const char* ScalarConverter::InvalidIntException::what() const throw() {
	return "INVALID INT";
}

const char* ScalarConverter::InvalidFloatException::what() const throw() {
	return "INVALID FLOAT";
}

const char* ScalarConverter::InvalidDoubleException::what() const throw() {
	return "INVALID DOUBLE";
}
