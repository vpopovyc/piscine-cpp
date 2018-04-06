/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 21:44:09 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/20 21:44:10 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	
	int 	i = std::rand() % NUM;

	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "SC4V-TP constructs : " << g_construct[i] << std::endl;
}

ScavTrap::ScavTrap(std::string & name) : ClapTrap() {

	int 	i = std::rand() % NUM;

	this->_name = "SC4V-TP: " + name;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << this->_name << " : Constructs : " << g_construct[i] << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & copy) {

	std::cout << this->_name << " called copy constructor" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->_name << " : Destructs : " << g_destruct[i]  << std::endl;
}

ScavTrap &		ScavTrap::operator=(const ScavTrap & rvalue) {

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

void	 		ScavTrap::challengeNewcomer(void) {

	int 	i = std::rand() % NUM;

	if (this->_energy_points >= CHALLENCOST) {
		std::cout << "SC4V-TP: " << this->_name << ": " + g_challenge[i] << std::endl;
		this->_energy_points -= CHALLENCOST;
	}
	else {

		std::cout << "SC4V-TP: " << this->_name << ": shit..." << std::endl;
	}
}
