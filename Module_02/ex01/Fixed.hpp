#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed& fixer);
        Fixed& operator=(const Fixed& fixer);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

    private:
        int _fixPointNum;
        const static int _fracBits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixer);

#endif