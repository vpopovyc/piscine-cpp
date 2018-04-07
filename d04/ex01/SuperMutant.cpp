/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 17:11:29 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 19:51:43 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : AEnemy(HP_SM, "Super Mutant")  {

    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void) {

    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& copy) {

    this->set_type(copy.get_type());
    this->set_hit_points(copy.get_hit_points());
}

SuperMutant&    SuperMutant::operator=(const SuperMutant& rvalue) {

    this->set_type(rvalue.get_type());
    this->set_hit_points(rvalue.get_hit_points());
    return (*this);
}

void            SuperMutant::take_damage(int damage) {

    int     current_dmg = damage - DMG_BLCK_SM;
    int     current_hp = get_hit_points();

    if (current_dmg < 0) {

        current_dmg = -current_dmg;
    }
    if (current_hp > 0) {

        current_hp -= current_dmg;
        if (current_hp <= 0) {

            delete this;
            return ;
        }
        set_hit_points(current_hp);
    }
}
