/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:29:44 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 21:29:45 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {

	_type.clear();
}

Weapon::Weapon(std::string input) {

	_type = input;
}

Weapon::~Weapon(void) {

	_type.clear();
}

const std::string&	Weapon::getType(void) {

	const std::string& 	r_type = _type;

	return (r_type);
}

void				Weapon::setType(std::string input) {

	_type = input;
}
