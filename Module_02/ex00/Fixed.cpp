#include "Fixed.hpp"

Fixed::Fixed() : _fixPointNum(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixer) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixer) {
        _fixPointNum = fixer.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const Fixed& fixer) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixer;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixPointNum);
}

void Fixed::setRawBits( int const raw ){ 
	this->_fixPointNum = raw;
}