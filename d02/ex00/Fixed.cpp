/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 20:59:31 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 20:59:32 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp" 

Fixed::Fixed(void) {

    std::cout << "Default constructor called" << std::endl;
    _fixed_point = 0;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called" << std::endl;
    _fixed_point = 0;
}

int     Fixed::getRawBits(void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed_point);
}

void    Fixed::setRawBits(const int raw) {

    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}

Fixed&  Fixed::operator=(Fixed & input) {

    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_point = input.getRawBits();
    return (*this);
}

Fixed::Fixed(Fixed& input) {

    std::cout << "Copy constructor called" << std::endl;
    *this = input;
}
