/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 20:59:38 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 20:59:40 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP
# define __FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>


# define CACHE  256.0f     // 2 ^ _fract

class Fixed {

private:
    int                 _fixed_point;
    static const int    _fract = 8;
    void            _overflowMul(Fixed & copy, const Fixed & fp2);

public:
    Fixed(void);
    Fixed(const int & input);
    Fixed(const float & input);
    Fixed(const Fixed & input);
    ~Fixed(void);
    int                          getRawBits(void) const;
    void                         setRawBits(int const raw);
    int                          toInt(void) const;
    Fixed&                       operator=(const     Fixed&     fp2);
    Fixed                        operator+(const     Fixed&     fp2);
    Fixed&                       operator+=(const    Fixed&     fp2);
    Fixed                        operator-(const     Fixed&     fp2);
    Fixed&                       operator-=(const    Fixed&     fp2);
    Fixed                        operator*(const     Fixed&     fp2);
    Fixed&                       operator*=(const    Fixed&     fp2);
    Fixed                        operator/(const     Fixed&     fp2);
    Fixed&                       operator/=(const    Fixed&     fp2);
    bool                         operator>(const     Fixed&     fp2) const;
    bool                         operator<(const     Fixed&     fp2) const;
    bool                         operator<=(const    Fixed&     fp2) const;
    bool                         operator>=(const    Fixed&     fp2) const;
    bool                         operator==(const    Fixed&     fp2) const;
    bool                         operator!=(const    Fixed&     fp2) const;
    Fixed&                       operator++(void);
    Fixed                        operator++(int);
    Fixed&                       operator--(void);
    Fixed                        operator--(int);
    static const Fixed&          max(const Fixed& fp1, const Fixed& fp2);
    static const Fixed&          min(const Fixed& fp1, const Fixed& fp2);
};
    Fixed&          max(Fixed& fp1, Fixed& fp2);
    Fixed&          min(Fixed& fp1, Fixed& fp2);
    std::ostream&   operator<<(std::ostream& stream, const Fixed& input);



#endif /* __FIXED_HPP */

/* Math

_fract = literal that describes binary point

Convertions {
    
    int (x) {
        
        fp = x * (2 ^ _fract);
    }

    float (x) {
        
        fp = round(x * (2 ^ _fract);
    } 

    fpToInt (x) {
        
        int = round(x / (2 ^ _fract));
    }
}

Operations {
    
    add (fp1, fp2) {
    
        fp = fp1 + fp2;
    }

    sub (fp1, fp2) {
    
        fp = fp1 - fp2;
    }

    mul (fp1, fp2) {
    
        fp = (fp1 * fp2) / (2 ^ _fract);
    }

    div (fp1, fp2) {
    
        fp = (fp1 * (2 ^ _fract)) / fp2;
    }
}

Ovewflow_mul (i1, i2, f1, f2){
    
    fp = (i1 * i2) * (2 ^ _fract) + (f1 * f2) / (2 ^ _fract) + (i1 * f2) + (i2 * f1);
}

*/