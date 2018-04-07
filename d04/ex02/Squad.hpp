/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:14:34 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 13:29:12 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SQUAD_HPP
# define __SQUAD_HPP

# include "ISquad.hpp"
# include <cstdlib>

class Squad : public ISquad {

private:

    int             _number_of_marines;
    ISpaceMarine    **_marines_army;
    void            _new_army(ISpaceMarine **const&old_marines_army, int number_of_marines);
    void            _copy_army(ISpaceMarine  **&new_marines_army, ISpaceMarine  **const&old_marines_army, int number_of_marines) const;
    void            _delete_army(ISpaceMarine  **&marines_army, int number_of_marines);
public:

    Squad(void);
    ~Squad(void);
    Squad(const Squad& copy);
    Squad&          operator=(const Squad& rvalue);
    int             get_count(void) const;
    ISpaceMarine*   get_unit(int index) const;
    int             push(ISpaceMarine* troop);
};

#endif /* __SQUAD_HPP */