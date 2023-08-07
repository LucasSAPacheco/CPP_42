#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    public:
        Fixed();
        Fixed(const Fixed& fixer);
        Fixed& operator=(const Fixed& fixer);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _fixPointNum;
        const static int _fracBits = 8;

};

#endif