/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 15:31:47 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 17:04:49 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", APC_PF, DMG_PF) {

}

PowerFist::PowerFist(const PowerFist& copy) {

    this->set_name(copy.get_name());
    this->set_damage(copy.get_damage());
    this->set_action_points(copy.get_action_points());
}

PowerFist&    PowerFist::operator=(const PowerFist& rvalue) {

    this->set_name(rvalue.get_name());
    this->set_damage(rvalue.get_damage());
    this->set_action_points(rvalue.get_action_points());
    return (*this);
}

PowerFist::~PowerFist(void) {

}

void            PowerFist::attack(void) const {

    std::cout << "* pschhh... SBAM! *" << std::endl;
}
