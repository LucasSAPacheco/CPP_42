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
        ~Fixed();

        Fixed& operator=(const Fixed& fixer);

        bool operator>(const Fixed& fixer) const;
        bool operator<(const Fixed& fixer) const;
        bool operator>=(const Fixed& fixer) const;
        bool operator<=(const Fixed& fixer) const;
        bool operator==(const Fixed& fixer) const;
        bool operator!=(const Fixed& fixer) const;

        Fixed operator+(const Fixed& fixer) const;
        Fixed operator-(const Fixed& fixer) const;
        Fixed operator*(const Fixed& fixer) const;
        Fixed operator/(const Fixed& fixer) const;
        Fixed operator-(void);
        Fixed operator+(void);

        Fixed operator++(void);
        Fixed operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed& min(Fixed& fixer1, Fixed& fixer2);
        static const Fixed& min(const Fixed& fixer1, const Fixed& fixer2);
        static Fixed& max(Fixed& fixer1, Fixed& fixer2);
        static const Fixed& max(const Fixed& fixer1, const Fixed& fixer2);

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