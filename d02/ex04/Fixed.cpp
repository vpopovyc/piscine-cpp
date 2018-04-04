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

    _fixed_point = 0;
}

Fixed::Fixed(const int & input) {

    float     tmp_input;

    tmp_input = std::roundf(input * CACHE);
    this->_fixed_point = tmp_input;
}

Fixed::Fixed(const float & input) {

    float     tmp_input;

    tmp_input = std::roundf(input * CACHE);
    this->_fixed_point = tmp_input;
}

Fixed::Fixed(const Fixed & input) {

    *this = input;
}

Fixed::~Fixed(void) {

    _fixed_point = 0;
}

int               Fixed::getRawBits(void) const {

    return (_fixed_point);
}

void              Fixed::setRawBits(const int raw) {

    _fixed_point = raw;
}

int               Fixed::toInt(void) const {

    float     tmp_value;
    int       tmp_cast;

    tmp_value = std::roundf(((float)this->getRawBits()) / CACHE);
    tmp_cast = (int)tmp_value;
    return (tmp_cast); 
}

void              Fixed::_overflowMul(Fixed & copy, const Fixed & fp2) {

    int     int_part_1;
    int     int_part_2;
    int     fct_part_1;
    int     fct_part_2;

    int_part_1 = this->getRawBits() / CACHE;
    int_part_2 = fp2.getRawBits() / CACHE;
    fct_part_1 = (this->getRawBits() & ((int)CACHE - 1));
    fct_part_2 = (fp2.getRawBits() & ((int)CACHE - 1));
    copy.setRawBits((int_part_1 * int_part_2) * CACHE + (fct_part_1 * fct_part_1) 
        / CACHE + (int_part_1 * fct_part_2) + (int_part_2 * fct_part_1));
}

Fixed&            Fixed::operator=(const Fixed & fp2) {

    this->setRawBits(fp2.getRawBits());
    return (*this);
}

Fixed             Fixed::operator+(const Fixed & fp2) {

    Fixed   tmp_fixed;

    tmp_fixed.setRawBits(this->getRawBits() + fp2.getRawBits());
    return (tmp_fixed);
}

Fixed&            Fixed::operator+=(const Fixed & fp2) {

    Fixed   tmp_fixed;

    tmp_fixed.setRawBits(this->getRawBits() + fp2.getRawBits());
    *this = tmp_fixed;
    return (*this);
}

Fixed             Fixed::operator-(const Fixed & fp2) {

    Fixed   tmp_fixed;

    tmp_fixed.setRawBits(this->getRawBits() - fp2.getRawBits());
    return (tmp_fixed);
}

Fixed&            Fixed::operator-=(const Fixed & fp2) {

    Fixed   tmp_fixed;

    tmp_fixed.setRawBits(this->getRawBits() - fp2.getRawBits());
    *this = tmp_fixed;
    return (*this);
}

Fixed             Fixed::operator*(const Fixed & fp2) {

    Fixed   tmp_fixed;
    int     tmp_result;

    tmp_result = this->getRawBits() * fp2.getRawBits();
    if ((tmp_result / this->getRawBits()) != fp2.getRawBits()) {
        this->_overflowMul(tmp_fixed, fp2);
    }
    else {
        tmp_fixed.setRawBits((this->getRawBits() * fp2.getRawBits()) / CACHE);
    }
    return (tmp_fixed);
}

Fixed&            Fixed::operator*=(const Fixed & fp2) {

    Fixed   tmp_fixed;
    int     tmp_result;

    tmp_result = this->getRawBits() * fp2.getRawBits();
    if ((tmp_result / this->getRawBits()) != fp2.getRawBits()) {
        this->_overflowMul(tmp_fixed, fp2);
    }
    else {
        tmp_fixed.setRawBits((this->getRawBits() * fp2.getRawBits()) / CACHE);
    }
    *this = tmp_fixed;
    return (*this);
}

Fixed             Fixed::operator/(const Fixed & fp2) {

    Fixed   tmp_fixed;

    tmp_fixed.setRawBits((this->getRawBits() * CACHE) / fp2.getRawBits());
    return (tmp_fixed);
}

Fixed&            Fixed::operator/=(const Fixed & fp2) {

    Fixed   tmp_fixed;

    tmp_fixed.setRawBits((this->getRawBits() * CACHE) / fp2.getRawBits());
    *this = tmp_fixed;
    return (*this);
}

Fixed&            Fixed::operator++(void) {
    
    this->setRawBits(this->getRawBits() + CACHE);
    return (*this);
}

Fixed            Fixed::operator++(int) {

    Fixed   result(*this);

    this->setRawBits(this->getRawBits() + CACHE);
    return (result);
}

Fixed&            Fixed::operator--(void) {
    
    this->setRawBits(this->getRawBits() - CACHE);
    return (*this);
}

Fixed            Fixed::operator--(int) {

    Fixed   result(*this);

    this->setRawBits(this->getRawBits() - CACHE);
    return (result);
}

bool              Fixed::operator>(const Fixed& fp2) const {

    return (this->getRawBits() > fp2.getRawBits());
}

bool              Fixed::operator<(const Fixed& fp2) const {

    return (this->getRawBits() < fp2.getRawBits());
}

bool              Fixed::operator>=(const Fixed& fp2) const {

    return (this->getRawBits() >= fp2.getRawBits());
}

bool              Fixed::operator<=(const Fixed& fp2) const {

    return (this->getRawBits() <= fp2.getRawBits());
}

bool              Fixed::operator==(const Fixed& fp2) const {

    return (this->getRawBits() == fp2.getRawBits());
}

bool              Fixed::operator!=(const Fixed& fp2) const {

    return (this->getRawBits() > fp2.getRawBits());
}

Fixed&            min(Fixed& fp1, Fixed& fp2) {

    if (fp1 < fp2)
        return (fp1);
    else
        return (fp2);
}

Fixed&            max(Fixed& fp1, Fixed& fp2) {

    if (fp1 > fp2)
        return (fp1);
    else
        return (fp2);
}

const Fixed&            Fixed::min(const Fixed& fp1, const Fixed& fp2) {

    if (fp1 < fp2)
        return (fp1);
    else
        return (fp2);
}

const Fixed&            Fixed::max(const Fixed& fp1, const Fixed& fp2) {

    if (fp1 > fp2)
        return (fp1);
    else
        return (fp2);
}

std::ostream&     operator<<(std::ostream& stream, const Fixed& input) {

    float     tmp_value;

    tmp_value = ((float)input.getRawBits()) / CACHE;
    stream << tmp_value;
    return (stream);
}
