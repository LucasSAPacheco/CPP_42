#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span{
    public:
        Span();
        Span( unsigned int N );
        Span( const Span& copy );
        Span& operator=( const Span& rhs );
        ~Span();

        void addNumber( int n );
        int shortestSpan( void );
        int longestSpan( void );
        size_t getSize( void );
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    private:
        unsigned int _maxSize;
        unsigned int _currentSize;
        std::vector<int> _numbers;

        class FullArrayException: public std::exception {
		public: virtual const char* what() const throw();
        };

        class WithoutNumbersException: public std::exception {
        public: virtual const char* what() const throw();
        };

        class SingleElementException: public std::exception {
        public: virtual const char* what() const throw();
        };

        class ItsTooBigException: public std::exception {
        public: virtual const char* what() const throw();
        };
};

#endif