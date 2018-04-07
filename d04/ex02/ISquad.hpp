/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:19:27 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 22:54:41 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ISQUAD_HPP
# define __ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad {

public:

    virtual ~ISquad(void) {}
    virtual int get_count(void) const = 0;
    virtual ISpaceMarine* get_unit(int index) const = 0;
    virtual int push(ISpaceMarine *troop) = 0;
};

#endif /* __ISQUAD_HPP */