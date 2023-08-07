#include "Fixed.hpp"

//Constructors e Destructors
Fixed::Fixed() : _fixPointNum(0){}

Fixed::Fixed(const int num) {
    this->_fixPointNum = num << this->_fracBits;
}

Fixed::Fixed(const float num) {
    this->_fixPointNum = (int) roundf(num * (1 << this->_fracBits));
}

Fixed::~Fixed() {}

// Copy constructor
Fixed::Fixed(const Fixed& copy) {*this = copy;}


// Getters e Setters
int Fixed::getRawBits( void ) const {
    return (this->_fixPointNum);
}

void Fixed::setRawBits( int const raw ){ 
	this->_fixPointNum = raw;
}

// Converters
float Fixed::toFloat( void ) const {
    return ((float)this->_fixPointNum / (1 << this->_fracBits));
}

int Fixed::toInt( void ) const {
    return (this->_fixPointNum >> this->_fracBits);
}


// Sobrecarga de operadores
Fixed& Fixed::operator=(const Fixed& fixer) {
    if (this != &fixer) {
        _fixPointNum = fixer.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixer) {
    os << fixer.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& fixer) const {
    return (this->_fixPointNum > fixer.getRawBits());
}

bool Fixed::operator<(const Fixed& fixer) const {
    return (this->_fixPointNum < fixer.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixer) const {
    return (this->_fixPointNum >= fixer.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixer) const {
    return (this->_fixPointNum <= fixer.getRawBits());
}

bool Fixed::operator==(const Fixed& fixer) const {
    return (this->_fixPointNum == fixer.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixer) const {
    return (this->_fixPointNum != fixer.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixer) const {
    return (Fixed(this->toFloat() + fixer.toFloat()));
}

Fixed Fixed::operator-(const Fixed& fixer) const {
    return (Fixed(this->toFloat() - fixer.toFloat()));
}

Fixed Fixed::operator*(const Fixed& fixer) const {
    return (Fixed(this->toFloat() * fixer.toFloat()));
}

Fixed Fixed::operator/(const Fixed& fixer) const {
    return (Fixed(this->toFloat() / fixer.toFloat()));
}

Fixed Fixed::operator-(void) {
    return (Fixed(-this->toFloat()));
}

Fixed Fixed::operator+(void) {
    return (Fixed(+this->toFloat()));
}

Fixed Fixed::operator++(void) {
    this->_fixPointNum++;
    return (*this);
}

Fixed Fixed::operator--(void) {
    this->_fixPointNum--;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed& Fixed::min(Fixed& fixer1, Fixed& fixer2) {
    if (fixer1.getRawBits() < fixer2.getRawBits())
        return (fixer1);
    else
        return (fixer2);
}

const Fixed& Fixed::min(const Fixed& fixer1, const Fixed& fixer2) {
    if (fixer1.getRawBits() < fixer2.getRawBits())
        return (fixer1);
    else
        return (fixer2);
}

Fixed& Fixed::max(Fixed& fixer1, Fixed& fixer2) {
    if (fixer1.getRawBits() > fixer2.getRawBits())
        return (fixer1);
    else
        return (fixer2);
}

const Fixed& Fixed::max(const Fixed& fixer1, const Fixed& fixer2) {
    if (fixer1.getRawBits() > fixer2.getRawBits())
        return (fixer1);
    else
        return (fixer2);
}