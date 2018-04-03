/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:30:24 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 21:30:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {

	_name.clear();	
}

HumanB::HumanB(std::string input) {

	_name = input;
}

HumanB::~HumanB(void) {

	_name.clear();	
}

void	HumanB::setWeapon(Weapon& basic_weapon) {

	_weapon = &basic_weapon;
}

void	HumanB::attack(void) {

	std::cout << _name + " attacks with his " << _weapon->getType() << std::endl;
}
