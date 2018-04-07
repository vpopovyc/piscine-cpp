/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:13:54 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 13:15:25 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main(void) {

    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    {
        std::cout << "~~~~clone test~~~~" << std::endl;
        ISpaceMarine *bob = jim->clone();   
        
        bob->battleCry();
        bob->rangedAttack();
        bob->meleeAttack();
        std::cout << "~~~~clone test~~~~" << std::endl;
    }

    // bob->battleCry();
    // jim->battleCry();

    // bob->rangedAttack();
    // jim->rangedAttack();

    // bob->meleeAttack();
    // jim->meleeAttack();

    ISquad  *vlc = new Squad;

    vlc->push(jim);
    vlc->push(bob);
    for (int i = 0; i < vlc->get_count(); ++i)
    {
        ISpaceMarine* cur = vlc->get_unit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return (0);
}