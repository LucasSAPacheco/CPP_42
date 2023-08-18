#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include <cmath>

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

	static void			convertFloat();
	static void			convertDouble();
	static void			convertInt();
	static void			convertChar();
	static std::string	floatPseudoLiteral();
	static std::string	doublePseudoLiteral();

// ==== CHECKERS =============================================================//
	static bool	isFloat();
	static bool	isDouble();
	static bool	isInt();
	static bool	isChar();
	static bool	isPseudoLiteral();
	static bool isNumber(int c);
	static bool	isDisplayableChar(char c);
	static bool	hasSign();

// ==== PRINT ================================================================//
	static void	printChar();
	static void	printInt();
	static void	printFloat();
	static void	printDouble();
	static void	printConversions();
	static void	printPseudoLiteral();

// ==== EXCEPTIONS ===========================================================//
	static bool	_intOverflow();
	static bool	_floatOverflow();
	static bool	_charOverflow();

	class InvalidTypeException: public std::exception {
		public: virtual const char* what() const throw();
	};

	class InvalidIntException: public std::exception {
		public: virtual const char* what() const throw();
	};

	class InvalidFloatException: public std::exception {
		public: virtual const char* what() const throw();
	};

	class InvalidDoubleException: public std::exception {
		public: virtual const char* what() const throw();
	};
};

#endif