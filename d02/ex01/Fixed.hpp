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

# define CACHE  1024.0f    // 2 ^ _fract

class Fixed {

private:
    int                 _fixed_point;
    static const int    _fract = 8;

public:
    Fixed(void);
    Fixed(const int & input);
    Fixed(const float & input);
    Fixed(const Fixed & input);
    ~Fixed(void);
    int             getRawBits(void) const;
    void            setRawBits(int const raw);
    int             toInt(void) const;
    Fixed&          operator=(const Fixed & input);
};
    std::ostream&   operator<<(std::ostream& stream, const Fixed& input);

#endif /* __FIXED_HPP */
