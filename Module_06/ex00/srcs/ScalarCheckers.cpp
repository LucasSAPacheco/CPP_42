#include "../includes/ScalarConverter.hpp"

bool	ScalarConverter::isFloat()
{
	size_t	i = 0;
	bool	dot = false;

	if (_str[0] == '+' || _str[0] == '-')
		i++;
	while (_str[i + 1] != '\0') {
		if (_str[i] != '.' && !isNumber(_str[i]))
			return false;
		if (_str[i] == '.' && dot)
			return false;
		if (_str[i] == '.')
			dot = true;
		i++;
	}
	if (_str[_str.length() - 1] != 'f')
		return false;
	return true;
}

bool	ScalarConverter::isDouble()
{
	size_t	i = 0;
	bool	dot = false;

	if (!_str[0])
		return false;
	if (_str[0] == '+' || _str[0] == '-')
		i++;
	while (_str[i] != '\0') {
		if (_str[i] != '.' && !isNumber(_str[i]))
			return false;
		if (_str[i] == '.' && dot)
			return false;
		if (dot && _precision < 7)
			_precision++;
		if (_str[i] == '.')
			dot = true;
		i++;
	}
	if (!dot)
		return false;
	return true;
}

bool	ScalarConverter::isInt()
{
	size_t	i = 0;

	if (!_str[0])
		return false;
	if (_str[0] == '+' || _str[0] == '-')
		i++;
	while (_str[i] != '\0') {
		if (!isNumber(_str[i]))
			return false;
		i++;
	}
	return true;
}

bool	ScalarConverter::isChar()
{
	if ((_str.length() == 1)
		&& (_str[0] >= '!' && _str[0] <= '~'))
		return true;
	return false;
}

bool	ScalarConverter::isPseudoLiteral() {
	if (_str == "+inf" || _str == "-inf" || _str == "nan" || _str == "+inff" || _str == "-inff" || _str == "nanf")
		return true;
	return false;
}

bool	ScalarConverter::isNumber(int c)
{
	if (c > 47 && c < 58)
		return (true);
	else
		return (false);
}

bool	ScalarConverter::isDisplayableChar(char c)
{
	if (c >= '!' && c <= '~')
		return true;
	return false;
}