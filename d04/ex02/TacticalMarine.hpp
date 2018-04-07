/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:43:27 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 21:52:27 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TACTICALMARINE_HPP
# define __TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:

    TacticalMarine(void);
    TacticalMarine(const TacticalMarine& copy);
    TacticalMarine&  operator=(const TacticalMarine& rvalue);
    ~TacticalMarine();
    ISpaceMarine*       clone(void) const;
    void                battleCry(void) const;
    void                rangedAttack(void) const;
    void                meleeAttack(void) const;
};

#endif /* __TACTICALMARINE_HPP */