#include "Span.hpp"

// ==== Constructors and Destructor ==========================================//
Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& copy) : _maxSize(copy._maxSize) {}

Span::~Span() {}

// ==== Overload Operators ===================================================//
Span& Span::operator=(const Span& rhs){
    if (this != &rhs)
        this->_maxSize = rhs._maxSize;
    return *this;
}

// ==== Member functions =====================================================//
size_t Span::getSize() {
    return (_numbers.size());
}

void Span::addNumber(int num) {
    if (_numbers.size() >= _maxSize) {
        throw Span::FullArrayException();
    }
    _numbers.push_back(num);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    size_t numToAdd = std::distance(begin, end);
    if (numToAdd <= _maxSize - _numbers.size()) {
        while (begin != end) {
            addNumber(*begin);
            ++begin;
        }
    } else {
        throw Span::ItsTooBigException();
    }
}

int Span::shortestSpan() {
    if (_numbers.size() < 1) {
        throw Span::WithoutNumbersException();
    }
    if (_numbers.size() == 1) {
        throw Span::SingleElementException();
    }
    std::sort(_numbers.begin(), _numbers.end());
    int shortest = _numbers[1] - _numbers[0];
    for (size_t i = 2; i < _numbers.size(); ++i) {
        shortest = std::min(shortest, _numbers[i] - _numbers[i - 1]);
    }
    return (shortest);
}

int Span::longestSpan() {
    if (_numbers.size() < 1) {
        throw Span::WithoutNumbersException();
    }
    if (_numbers.size() == 1) {
        throw Span::SingleElementException();
    }
    std::sort(_numbers.begin(), _numbers.end());
    return (_numbers.back() - _numbers.front());
}


// ==== Exceptions ===========================================================//   
const char* Span::FullArrayException::what() const throw(){
    return "Array is full!";
}

const char* Span::WithoutNumbersException::what() const throw(){
    return "Array is empty!";
}

const char* Span::SingleElementException::what() const throw(){
    return "Array has only one element!";
}

const char* Span::ItsTooBigException::what() const throw(){
    return "You are trying to put too much numbers in this empty spaces Span!";
}