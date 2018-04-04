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

Fixed::Fixed(const int & input) {

    std::cout << "Int constructor called" << std::endl;    
    float     tmp_input;

    tmp_input = std::roundf(input * CACHE);
    this->_fixed_point = tmp_input;
}

Fixed::Fixed(const float & input) {

    std::cout << "Float constructor called" << std::endl;
    float     tmp_input;

    tmp_input = std::roundf(input * CACHE);
    this->_fixed_point = tmp_input;
}

Fixed::Fixed(const Fixed & input) {

    std::cout << "Copy constructor called" << std::endl;
    *this = input;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called" << std::endl;
    _fixed_point = 0;
}

int               Fixed::getRawBits(void) const {

    return (_fixed_point);
}

void              Fixed::setRawBits(const int raw) {

    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}

int               Fixed::toInt(void) const {

    float     tmp_value;
    int       tmp_cast;

    tmp_value = roundf(((float)this->getRawBits()) / CACHE);
    tmp_cast = (int)tmp_value;
    return (tmp_cast); 
}

Fixed&            Fixed::operator=(const Fixed & input) {

    std::cout << "Assignation operator called" << std::endl;
    this->_fixed_point = input.getRawBits();
    return (*this);
}

std::ostream&     operator<<(std::ostream& stream, const Fixed& input) {

    float     tmp_value;

    tmp_value = ((float)input.getRawBits()) / CACHE;
    stream << tmp_value;
    return (stream);
}
