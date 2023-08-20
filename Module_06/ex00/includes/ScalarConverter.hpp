#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include <cmath>
# include <sstream>
# include <memory>

class ScalarConverter {
public:
	static void	convert(std::string str);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& copy);
	ScalarConverter& operator=(const ScalarConverter& rhs);
	~ScalarConverter();

	static std::string	_str;
	static std::string	_type;
	static int			_int;
	static char			_char;
	static float		_float;
	static double		_double;
	static size_t		_precision;

	static void			convertToFloat();
	static void			convertToDouble();
	static void			convertToInt();
	static void			convertToChar();
	static std::string	floatPseudoLiteral();
	static std::string	doublePseudoLiteral();

// ==== Checkers =============================================================//
	static bool	isFloat();
	static bool	isDouble();
	static bool	isInt();
	static bool	isChar();
	static bool	isPseudoLiteral();
	static bool isNumber(int c);
	static bool	isDisplayableChar(char c);
	static bool	intOverflow();
	static bool	floatOverflow();
	static bool	charOverflow();

// ==== Prints ================================================================//
	static void	printChar();
	static void	printInt();
	static void	printFloat();
	static void	printDouble();
	static void	printConversions();
	static void	printPseudoLiteral();

// ==== Exceptions ===========================================================//
	class InvalidTypeException: public std::exception {
		public: virtual const char* what() const throw();
	};

	class InvalidIntException: public std::exception {
		public: virtual const char* what() const throw();
	};

	class InvalidDoubleException: public std::exception {
		public: virtual const char* what() const throw();
	};
	class InvalidFloatException: public std::exception {
		public: virtual const char* what() const throw();
	};
};

#endif