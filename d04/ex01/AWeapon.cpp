/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 14:16:23 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 17:00:38 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp" 

AWeapon::AWeapon(void) {

    _name.clear();
    _damage = 0;
    _action_points = 0;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {

    _name = name;
    _damage = damage;
    _action_points = apcost;
}

AWeapon::AWeapon(const AWeapon& copy) {

    _name = copy.get_name();
    _damage = copy.get_damage();
    _action_points = copy.get_action_points();
}

AWeapon::~AWeapon(void) {
    
}

AWeapon&        AWeapon::operator=(const AWeapon& rvalue) {

    this->set_name(rvalue.get_name());
    this->set_damage(rvalue.get_damage());
    this->set_action_points(rvalue.get_action_points());
    return (*this);
}

std::ostream&   operator<<(std::ostream& stream, const AWeapon& input) {

    stream << "Weapon " << input.get_name() << " can deal " << input.get_damage() << " damage ";
    stream << "and use " << input.get_action_points() << " action points" << std::endl;
    return (stream);
}

std::string     AWeapon::get_name(void) const {

    return (_name);
}

int             AWeapon::get_damage(void) const {

    return (_damage);
}

int             AWeapon::get_action_points(void) const {

    return (_action_points);
}

void            AWeapon::set_name(std::string input) {

    _name = input;
}

void            AWeapon::set_damage(int input) {

    _damage = input;
}

void            AWeapon::set_action_points(int input) {

    _action_points = input;
}

void            AWeapon::attack(void) const {

    std::cout << "Abstract attack" << std::endl;
}

