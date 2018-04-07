/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:55:14 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 22:10:02 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP
# define __CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
    
public:

    Cure(void);
    ~Cure(void);
    Cure(const Cure& copy);
    Cure&        operator=(const Cure& rvalue);
    Cure*        clone(void) const;
    void         use(ICharacter & target);
};

#endif /* __CURE_HPP */