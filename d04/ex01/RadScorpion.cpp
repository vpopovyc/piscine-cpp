/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 17:50:26 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 19:50:06 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : AEnemy(HP_RC, "Rad Scorpion")  {

    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) {

    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& copy) {

    this->set_type(copy.get_type());
    this->set_hit_points(copy.get_hit_points());
}

RadScorpion&    RadScorpion::operator=(const RadScorpion& rvalue) {

    this->set_type(rvalue.get_type());
    this->set_hit_points(rvalue.get_hit_points());
    return (*this);
}

void            RadScorpion::take_damage(int damage) {

   int     current_hp = get_hit_points();

    if (damage < 0) {

        damage = -damage;
    }
    if (current_hp > 0) {

        current_hp -= damage;
        if (current_hp <= 0) {

            delete this;
            return ;
        }
        set_hit_points(current_hp);
    }
}
