/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:42:23 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 21:54:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP
# define __ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
    
public:

    Ice(void);
    ~Ice(void);
    Ice(const Ice& copy);
    Ice&        operator=(const Ice& rvalue);
    Ice*        clone(void) const;
    void        use(ICharacter & target);
};

#endif /* __ICE_HPP */