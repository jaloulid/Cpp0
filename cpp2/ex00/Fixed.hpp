/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaloulid <jaloulid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:27:04 by jaloulid          #+#    #+#             */
/*   Updated: 2025/12/30 20:27:05 by jaloulid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed
{
    private :
        int _value;
        static const int _fracBits = 8;
    public :
        Fixed();
        Fixed(const Fixed& others);
        Fixed& operator=(const Fixed& others);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();

};



#endif