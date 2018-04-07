/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:28:42 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 21:56:54 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {

    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& copy) {

    std::cout << "copy constructor" << std::endl;
    (void)copy;
}

AssaultTerminator::~AssaultTerminator(void) {

    std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator&  AssaultTerminator::operator=(const AssaultTerminator& rvalue) {

    std::cout << "Assigment operator" << std::endl;
    (void)rvalue;
    return (*this);
}

ISpaceMarine*       AssaultTerminator::clone(void) const {

    return (new AssaultTerminator(*this));
}

void                AssaultTerminator::battleCry(void) const {

    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void                AssaultTerminator::rangedAttack(void) const {

    std::cout << "* does nothing *" << std::endl;
}

void                AssaultTerminator::meleeAttack(void) const {

    std::cout << "* attacks with chainfists *" << std::endl;
}