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

FragTrap::FragTrap(std::string & name) {

	int 	i = std::rand() % NUM;

	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP: " << name << " : Constructs : " << g_construct[i] << std::endl;
}

FragTrap::FragTrap(void) {

	std::cout << "FR4G-TP: " << this->_name << std::endl;
}

FragTrap::FragTrap(FragTrap & copy) {

	std::cout << "FR4G-TP: " << this->_name << " called copy constructor" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << "FR4G-TP: " << this->_name << " : Destructs : " << g_destruct[i]  << std::endl;
}

FragTrap &		FragTrap::operator=(const FragTrap & rvalue) {

	std::cout << "FR4G-TP: " << this->_name << " is now " << rvalue._name << std::endl;
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

void			FragTrap::rangedAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << "FR4G-TP: " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage; 
	std::cout << " points of damage! : " << g_ranged_attack[i] << std::endl;
}

void			FragTrap::meleeAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << "FR4G-TP: " << this->_name;
	std::cout << " punches " << target;
	std::cout << ", causing " << this->_melee_attack_damage; 
	std::cout << " points of damage ! : " << g_melee_attack[i] << std::endl;
}

void 			FragTrap::takeDamage(unsigned int amount){

	int		damage = 0;
	int 	i = std::rand() % NUM;

	if (this->_hit_points > 0) {

		if (amount > _armor_damage_reduction) {

			damage = amount - _armor_damage_reduction;
			this->_hit_points -= damage;
			if (this->_hit_points <= 0) {

				this->_hit_points = 0;
				std::cout << "FR4G-TP: " << this->_name << " HP[" << this->_hit_points << "] broken!" << std::endl;
			}
			else {

				std::cout << "FR4G-TP: " << this->_name << " HP[" << this->_hit_points << "] : " << g_hit[i] << std::endl; 
			}
		}
		else {

			std::cout << "FR4G-TP: " << this->_name << ": Ha-ha, try again looooser!" << std::endl;
		}
	}
	else {

		std::cout << "FR4G-TP: " << this->_name << " already broken!" << std::endl;
	}
}

void 			FragTrap::beRepaired(unsigned int amount){

	if (this->_hit_points < 100) {

		this->_hit_points += amount;
		if (this->_hit_points > 100) {

			this->_hit_points = 100;
		}
		std::cout << "FR4G-TP: " << this->_name << " HP[" << this->_hit_points << "]: Sweet life juice!" << std::endl;
	}
	else {

		std::cout << "I'm a sexy dinosaur! Rawr!" << std::endl;
	}

}

void	 		FragTrap::vaulthunter_dot_exe(std::string const & target) {

	int 	i = std::rand() % NUM;

	if (this->_energy_points >= VAULTENCOST) {
		std::cout << "FR4G-TP: " << this->_name << ": " + g_vault[i] << " Target: "<< target << std::endl;
		this->_energy_points -= VAULTENCOST;
	}
	else {

		std::cout << "FR4G-TP: " << this->_name << ": shit..." << std::endl;
	}
}
