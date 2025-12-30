/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaloulid <jaloulid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:27:15 by jaloulid          #+#    #+#             */
/*   Updated: 2025/12/30 20:27:16 by jaloulid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fracBits));
}

float Fixed::toFloat() const
{
    return ((float)_value / (1 << _fracBits));

}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    _value = value << _fracBits;

}

int Fixed::toInt() const
{
    return _value >> _fracBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return out;
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
