/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 17:46:26 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/20 17:46:27 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	
	int 	i = std::rand() % NUM;

	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "FR4G-TP constructs : " << g_construct[i] << std::endl;
}

FragTrap::FragTrap(std::string & name) : ClapTrap() {

	int 	i = std::rand() % NUM;

	this->_name = "FR4G-TP: " + name;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << this->_name << " : Constructs : " << g_construct[i] << std::endl;
}

FragTrap::FragTrap(FragTrap & copy) {

	std::cout << this->_name << " called copy constructor" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->_name << " : Destructs : " << g_destruct[i]  << std::endl;
}

FragTrap &		FragTrap::operator=(const FragTrap & rvalue) {

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

void	 		FragTrap::vaulthunter_dot_exe(std::string const & target) {

	int 	i = std::rand() % NUM;

	if (this->_energy_points >= VAULTENCOST) {
		std::cout << this->_name << ": " + g_vault[i] << " Target: "<< target << std::endl;
		this->_energy_points -= VAULTENCOST;
	}
	else {

		std::cout << this->_name << ": shit..." << std::endl;
	}
}
