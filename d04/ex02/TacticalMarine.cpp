/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:43:17 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 21:57:37 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {

    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& copy) {

    std::cout << "copy constructor" << std::endl;
    (void)copy;
}

TacticalMarine::~TacticalMarine(void) {

    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine&  TacticalMarine::operator=(const TacticalMarine& rvalue) {

    std::cout << "Assigment operator" << std::endl;
    (void)rvalue;
    return (*this);
}

ISpaceMarine*       TacticalMarine::clone(void) const {

    return (new TacticalMarine(*this));
}

void                TacticalMarine::battleCry(void) const {

    std::cout << "For the holy PLOT!" << std::endl;
}

void                TacticalMarine::rangedAttack(void) const {

    std::cout << "* attacks with bolter *" << std::endl;
}

void                TacticalMarine::meleeAttack(void) const {

    std::cout << "* attacks with chainsword *" << std::endl;
}
