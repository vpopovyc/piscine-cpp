/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:28:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 21:52:32 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ASSAULTTERMINATOR_HPP
# define __ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:

    AssaultTerminator(void);
    AssaultTerminator(const AssaultTerminator& copy);
    AssaultTerminator&  operator=(const AssaultTerminator& rvalue);
    ~AssaultTerminator();
    ISpaceMarine*       clone(void) const;
    void                battleCry(void) const;
    void                rangedAttack(void) const;
    void                meleeAttack(void) const;
};

#endif /* __ASSAULTTERMINATOR_HPP */