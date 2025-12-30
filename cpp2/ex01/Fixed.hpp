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
        ~Fixed();

};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif