/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEnemy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 16:17:55 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 19:48:32 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEnemy.hpp"

AEnemy::AEnemy(void) {

    _type.clear();
    _hit_points = 0;
}

AEnemy::AEnemy(int hp, std::string const& type) {

    _hit_points = hp;
    _type = type;
}

AEnemy::AEnemy(const AEnemy& copy) {

    _type = copy.get_type();
    _hit_points = copy.get_hit_points();
}

AEnemy::~AEnemy(void) {

    _type.clear();
    _hit_points = 0;
}

AEnemy&         AEnemy::operator=(const AEnemy& rvalue) {

    this->set_type(rvalue.get_type());
    this->set_hit_points(rvalue.get_hit_points());
    return (*this);
}

void            AEnemy::set_hit_points(int input) {

    _hit_points = input;  
}

void            AEnemy::set_type(std::string input) {

    _type = input;
}

int             AEnemy::get_hit_points(void) const {

    return (_hit_points);
}

std::string     AEnemy::get_type(void) const {

    return (_type);
}

void            AEnemy::take_damage(int damage) {

    int     current_hp = get_hit_points();

    if (damage < 0) {

        damage = -damage;
    }
    if (current_hp > 0) {

        current_hp -= damage;
        if (current_hp <= 0) {


        }
        set_hit_points(current_hp);
    }
}

std::ostream&   operator<<(std::ostream& stream, const AEnemy& input) {

    stream << "Enemy " << input.get_type() << " – HP[" << input.get_hit_points() << "]" << std::endl;
    return (stream);
}
