#include "Fixed.hpp"

//Constructors e Destructors
Fixed::Fixed() : _fixPointNum(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixPointNum = num << this->_fracBits;
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixPointNum = (int) roundf(num * (1 << this->_fracBits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Sobrecarga de operadores
Fixed& Fixed::operator=(const Fixed& fixer) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixer) {
        _fixPointNum = fixer.getRawBits();
    }
    return *this;
}

// Copy constructor
Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

int Fixed::getRawBits( void ) const {
    return (this->_fixPointNum);
}

void Fixed::setRawBits( int const raw ){ 
	this->_fixPointNum = raw;
}

float Fixed::toFloat( void ) const {
    return ((float)this->_fixPointNum / (1 << this->_fracBits));
}

int Fixed::toInt( void ) const {
    return (this->_fixPointNum >> this->_fracBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixer) {
    os << fixer.toFloat();
    return os;
}
