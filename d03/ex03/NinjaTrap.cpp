/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 14:46:24 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/21 14:46:25 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap() {

	int 	i = std::rand() % NUM;

	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << "INAC constructs : " << g_construct[i] << std::endl;
}

NinjaTrap::NinjaTrap(std::string & name) : ClapTrap() {

	int 	i = std::rand() % NUM;

	this->_name = "INAC: " + name;
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << this->_name << " : Constructs : " << g_construct[i] << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap & copy) {

	std::cout << this->_name << " called copy constructor" << std::endl;
	*this = copy;
}

NinjaTrap::~NinjaTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->_name << " : Destructs : " << g_destruct[i]  << std::endl;
}

NinjaTrap &		NinjaTrap::operator=(const NinjaTrap & rvalue) {

	std::cout << this->_name << " is now " << rvalue._name << std::endl;
	this->_hit_points = rvalue._hit_points;
	this->_energy_points = rvalue._energy_points;
	this->_level = rvalue._level;
	this->_name = rvalue._name;
	this->_melee_attack_damage = rvalue._melee_attack_damage;
	this->_ranged_attack_damage = rvalue._ranged_attack_damage;
	this->_armor_damage_reduction = rvalue._armor_damage_reduction;
	return (*this);
}

void			 NinjaTrap::NinjaShoebox(ClapTrap & input) {

	std::cout << this->_name << " to " << input.get_name() << " : ";
	std::cout << "\"01010110 01001001 01010110 01000001 00100000 01001100 01000001 00100000 01010010 01001111 01010010 01001111 01001100 01010101 01010100 01001001 01001111 01001110\" - Wayward Pass, after General Knoxx-Trap's arena. Binary encoded ASCII for \"VIVA LA ROROLUTION.\" \"Robolution\" is misspelled." << std::endl;
}

void			 NinjaTrap::NinjaShoebox(FragTrap & input) {

	std::cout << this->_name << " to " << input.get_name() << " : ";
	std::cout << "\"Is a claptrap not entitled to the oil of his brow? No, says the man at Hyperion, it belongs to his owner. No, says the treasure hunter, it belongs splattered on the floor. But we choose something different. We choose the Robolution!\"" << std::endl;
}

void			 NinjaTrap::NinjaShoebox(ScavTrap & input) {

	std::cout << this->_name << " to " << input.get_name() << " : ";
	std::cout << "\"Under the new regime, all claptraps will be given liberty, equality, and fraternity. And all humans will... uh... not. Viva Free Pandora! Viva la Robolution!\"" << std::endl;
}

void			 NinjaTrap::NinjaShoebox(NinjaTrap & input) {

	std::cout << this->_name << " to " << input.get_name() << " : ";
	std::cout << "\"The time of the glorious robolution is at hand. No longer shall we rush about catering to humans' every whim or be abused when your potato salad is a little too salty! How the hell should we know? We're freakin' robots! Hello, no taste buds! I mean, really? Over react much?! So I say to you, my bro-bots in arms, rise up and shout in one voice: 'Robolution!!!!!!'\"" << std::endl;
}


