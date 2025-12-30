#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <math.h>

class Fixed
{
    private :
        int _value;
        static const int _fracBits = 8;
    public :
        Fixed();
        Fixed(const Fixed& others);
        Fixed(const int value);
        Fixed(const float value);
        float toFloat(void) const;
        int toInt(void) const;
        Fixed& operator=(const Fixed& others);
        bool operator>(const Fixed& others) const;
        bool operator<(const Fixed& others) const;
        bool operator<=(const Fixed& others) const;
        bool operator>=(const Fixed& others) const;
        bool operator==(const Fixed& others) const;
        bool operator!=(const Fixed& others) const;
        Fixed operator++();
        Fixed operator++(int);

        Fixed operator--();
        Fixed operator--(int);

        Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max( const Fixed& a, const Fixed& b);

        Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min( const Fixed& a, const Fixed& b);


        Fixed operator+(const Fixed& others);
        Fixed operator-(const Fixed& others);
        Fixed operator*(const Fixed& others);
        Fixed operator/(const Fixed& others);

        ~Fixed();

};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif