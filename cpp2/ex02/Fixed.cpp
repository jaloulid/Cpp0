#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(float value)
{
    _value = roundf(value * (1 << _fracBits));
}

float Fixed::toFloat() const
{
    return ((float)_value / (1 << _fracBits));
}

Fixed::Fixed(int value)
{
    _value = value << _fracBits;
}

int Fixed::toInt() const
{
    return _value >> _fracBits;
}

Fixed::Fixed(const Fixed &others)
{
    _value = others._value;
}

Fixed &Fixed::operator=(const Fixed &others)
{
    if (this != &others)
        _value = others._value;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

Fixed Fixed::operator*(const Fixed &others)
{
    Fixed result;
    result._value = (this->_value * others._value) / (1 << _fracBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &others)
{
    Fixed result;
    result._value = (this->_value << _fracBits) / others._value;
    return result;
}

Fixed Fixed::operator+(const Fixed &others)
{
    Fixed result;
    result._value = (this->_value + others._value) / (1 << _fracBits);
    return result;
}

Fixed Fixed::operator-(const Fixed &others)
{
    Fixed result;
    result._value = (this->_value - others._value) / (1 << _fracBits);
    return result;
}

bool Fixed::operator>(const Fixed &others) const
{
    return (this->_value > others._value);
}

bool Fixed::operator<(const Fixed &others) const
{
    return (this->_value < others._value);
}

bool Fixed::operator<=(const Fixed &others) const
{
    return (this->_value <= others._value);
}

bool Fixed::operator>=(const Fixed &others) const
{
    return (this->_value >= others._value);
}

bool Fixed::operator==(const Fixed &others) const
{
    return (this->_value == others._value);
}
bool Fixed::operator!=(const Fixed &others) const
{
    return (this->_value != others._value);
}

Fixed Fixed::operator++()
{
    _value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    _value++;
    return tmp;
}

Fixed Fixed::operator--()
{
    _value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    _value--;
    return tmp;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}