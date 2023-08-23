#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>

class Span{
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& rhs);
        ~Span();

        void addNumber(int n);

    private:
        unsigned int _maxSize;
        int *_array;

        class FullArrayException: public std::exception {
		public: virtual const char* what() const throw();
	};

};

#endif