#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& others)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = others._value;

}

Fixed &Fixed::operator=(const Fixed& others)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &others)
        _value = others._value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;

}
void Fixed::setRawBits(int const value)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = value;
}