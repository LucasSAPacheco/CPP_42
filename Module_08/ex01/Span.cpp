#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& copy) : _maxSize(copy._maxSize) {}

Span& Span::operator=(const Span& rhs){
    if (this != &rhs)
        this->_maxSize = rhs._maxSize;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n){
    if (this->_maxSize == 0)
        throw Span::FullArrayException();
    _array.push_back(n);
    this->_maxSize--;
}