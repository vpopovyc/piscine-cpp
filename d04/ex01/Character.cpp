/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 18:30:07 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 20:59:30 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp" 

Character::Character(void) {

    _name.clear();
    _ap_amount = 0;
    _p_weapon = NULL;
}

Character::~Character(void) {

    _name.clear();
    _ap_amount = 0;
    _p_weapon = NULL;
}

Character::Character(const Character& copy) {

    _name = copy.get_name();
    _ap_amount = copy.get_ap_amount();
    _p_weapon = copy.get_p_weapon();
}

Character&      Character::operator=(const Character& rvalue) {

   this->set_name(rvalue.get_name());
   this->set_ap_amount(rvalue.get_ap_amount());
   this->set_p_weapon(rvalue.get_p_weapon());
   return (*this); 
}


Character::Character(std::string const& name) {

    _name = name;
    _ap_amount = AP_MAX;
    _p_weapon = NULL;
}

std::ostream&   operator<<(std::ostream& stream, const Character& input) {

    stream << input.get_name() << " has " << input.get_ap_amount() << " and ";
    if (input.get_p_weapon()) {

        stream << " wields a " << input.get_p_weapon()->get_name();
    }
    else {

        stream << " is unarmed";
    }
    stream << std::endl;
    return (stream);
}

void            Character::recover_ap(void) {

    int     ap_amount = this->get_ap_amount() + AP_REST;

    if (ap_amount > AP_MAX) {

        ap_amount = AP_MAX;
    }
    this->set_ap_amount(ap_amount);
}

void            Character::attack(AEnemy* zork) {

    if (this->get_p_weapon()) {

        int     ap_cost = this->get_ap_amount() - this->get_p_weapon()->get_action_points();
        
        if(ap_cost >= 0) {

            std::cout << this->get_name() << " attacks " << zork->get_type();
            std::cout << " with a " << this->get_p_weapon()->get_name() << std::endl;
            this->get_p_weapon()->attack();
            zork->take_damage(this->get_p_weapon()->get_damage());
            this->set_ap_amount(ap_cost);
        }
    }
}

void            Character::equip(AWeapon* arms) {

    this->set_p_weapon(arms);
}

int             Character::get_ap_amount(void) const {

    return (_ap_amount);
}

AWeapon*        Character::get_p_weapon(void) const {

    return (_p_weapon);
}

std::string     Character::get_name(void) const {

    return (_name);
}

void            Character::set_ap_amount(int input) {

    _ap_amount = input;
}

void            Character::set_p_weapon(AWeapon* input) {

    _p_weapon = input;
}

void            Character::set_name(std::string input) {

    _name = input;
}
