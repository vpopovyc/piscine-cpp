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

ScavTrap::ScavTrap(std::string & name) {

	int 	i = std::rand() % NUM;

	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = name;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "SC4V-TP: " << name << " : Constructs : " << g_construct[i] << std::endl;
}

ScavTrap::ScavTrap(void) {

	std::cout << "SC4V-TP: " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & copy) {

	std::cout << "SC4V-TP: " << this->_name << " called copy constructor" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << "SC4V-TP: " << this->_name << " : Destructs : " << g_destruct[i]  << std::endl;
}

ScavTrap &		ScavTrap::operator=(const ScavTrap & rvalue) {

	std::cout << "SC4V-TP: " << this->_name << " is now " << rvalue._name << std::endl;
	this->_hit_points = rvalue._hit_points;
	this->_max_hit_points = rvalue._max_hit_points;
	this->_energy_points = rvalue._energy_points;
	this->_max_energy_points = rvalue._max_energy_points;
	this->_level = rvalue._level;
	this->_name = rvalue._name;
	this->_melee_attack_damage = rvalue._melee_attack_damage;
	this->_ranged_attack_damage = rvalue._ranged_attack_damage;
	this->_armor_damage_reduction = rvalue._armor_damage_reduction;
	return (*this);
}

void			ScavTrap::rangedAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << "SC4V-TP: " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage; 
	std::cout << " points of damage! : " << g_ranged_attack[i] << std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << "SC4V-TP: " << this->_name;
	std::cout << " punches " << target;
	std::cout << ", causing " << this->_melee_attack_damage; 
	std::cout << " points of damage ! : " << g_melee_attack[i] << std::endl;
}

void 			ScavTrap::takeDamage(unsigned int amount){

	int		damage = 0;
	int 	i = std::rand() % NUM;

	if (this->_hit_points > 0) {

		if (amount > _armor_damage_reduction) {

			damage = amount - _armor_damage_reduction;
			this->_hit_points -= damage;
			if (this->_hit_points <= 0) {

				this->_hit_points = 0;
				std::cout << "SC4V-TP: " << this->_name << " HP[" << this->_hit_points << "] broken!" << std::endl;
			}
			else {

				std::cout << "SC4V-TP: " << this->_name << " HP[" << this->_hit_points << "] : " << g_hit[i] << std::endl; 
			}
		}
		else {

			std::cout << "SC4V-TP: " << this->_name << ": Ha-ha, try again looooser!" << std::endl;
		}
	}
	else {

		std::cout << "SC4V-TP: " << this->_name << " already broken!" << std::endl;
	}
}

void 			ScavTrap::beRepaired(unsigned int amount){

	if (this->_hit_points < 100) {

		this->_hit_points += amount;
		if (this->_hit_points > 100) {

			this->_hit_points = 100;
		}
		std::cout << "SC4V-TP: " << this->_name << " HP[" << this->_hit_points << "]: Sweet life juice!" << std::endl;
	}
	else {

		std::cout << "I'm a sexy dinosaur! Rawr!" << std::endl;
	}

}

void	 		ScavTrap::challengeNewcomer(void) {

	int 	i = std::rand() % NUM;

	if (this->_energy_points >= CHALLENCOST) {
		std::cout << "FR4G-TP: " << this->_name << ": " + g_challenge[i] << std::endl;
		this->_energy_points -= CHALLENCOST;
	}
	else {

		std::cout << "FR4G-TP: " << this->_name << ": shit..." << std::endl;
	}
}
