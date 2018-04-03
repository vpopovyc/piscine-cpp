/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 14:55:38 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 14:55:39 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

    _name.clear();
    _type.clear();
}

Zombie::~Zombie(void) {

    _name.clear();
    _type.clear();
}

void            Zombie::announce(std::string quote) {

    std::cout << _name + " the " << _type << ": " + quote << std::endl;
}

void            Zombie::set_name(std::string input) {

    _name = input;
}

void            Zombie::set_type(std::string input) {

    _type = input;
}

std::string     Zombie::get_name(void) {

    return (_name);
}

std::string     Zombie::get_type(void) {

    return (_type);
}
