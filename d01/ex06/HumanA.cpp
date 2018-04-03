/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:30:08 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 21:30:10 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string input, Weapon& basic_weapon): _weapon(basic_weapon) {

	_name = input;
	_weapon = basic_weapon;
}

HumanA::~HumanA(void) {

	_name.clear();
}

void	HumanA::attack(void) {

	std::cout << _name + " attacks with his " << _weapon.getType() << std::endl;
}
