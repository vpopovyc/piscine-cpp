/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 20:59:19 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 20:59:20 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int     main( void ) {

    Fixed   a (3.145566f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "a:      " << a << std::endl <<  "b:      " << b << std::endl;
    std::cout << "a += b: " << (a += b) << std::endl;  
    std::cout << "a -= b: " << (a -= b) << std::endl;
    std::cout << "a *= b: " << (a *= b) << std::endl;
    std::cout << "a /= b: " << (a /= b) << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "before pre+ :  " << a << std::endl;
    std::cout <<  "pre+ :         " << ++a << std::endl;
    std::cout << "before post+ : " << a << std::endl;
    std::cout << "post+ :        " << a++ << std::endl;
    std::cout << "after post+ :  " << a << std::endl;
    std::cout << "before pre- :  " << a << std::endl;
    std::cout <<  "pre- :         " << --a << std::endl;
    std::cout << "before post- : " << a << std::endl;
    std::cout << "post- :        " << a-- << std::endl;
    std::cout << "after post- :  " << a << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "a:      " << a << std::endl <<  "b:      " << b << std::endl;
    std::cout << "a <  b: " << (a < b) << std::endl;
    std::cout << "a >  b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "a:      " << a << std::endl <<  "b:      " << b << std::endl;
    std::cout << "◊ Max:  " << Fixed::max( a, b ) << std::endl;
    std::cout << "◊ Min:  " << Fixed::min( a, b ) << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "a:      " << a << std::endl <<  "b:      " << Fixed(1.0f) << std::endl;
    std::cout << "◊ Max:  " << Fixed::max( a, Fixed(1.0f)) << std::endl;
    std::cout << "◊ Min:  " << Fixed::min( a, Fixed(1.0f)) << std::endl;

    return 0;
}
