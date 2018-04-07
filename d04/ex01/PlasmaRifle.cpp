/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 15:13:57 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 17:04:17 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", APC_PR, DMG_PR) {

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy) {

    this->set_name(copy.get_name());
    this->set_damage(copy.get_damage());
    this->set_action_points(copy.get_action_points());
}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle& rvalue) {

    this->set_name(rvalue.get_name());
    this->set_damage(rvalue.get_damage());
    this->set_action_points(rvalue.get_action_points());
    return (*this);
}

PlasmaRifle::~PlasmaRifle(void) {

}

void            PlasmaRifle::attack(void) const {

    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
