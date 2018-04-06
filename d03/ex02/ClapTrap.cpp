/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 22:10:01 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/20 22:10:03 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

	int 	i = std::rand() % NUM;

	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 0;
	_ranged_attack_damage = 0;
	_armor_damage_reduction = 0;
	std::cout << "CL4P-TP constructs : " << g_construct[i] << std::endl;
}

ClapTrap::ClapTrap(std::string & name) {

	int 	i = std::rand() % NUM;

	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_name = "CL4P-TP: " + name;
	_level = 1;
	_melee_attack_damage = 0;
	_ranged_attack_damage = 0;
	_armor_damage_reduction = 0;
	std::cout << _name << " : Constructs : " << g_construct[i] << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & copy) {

	std::cout << this->_name << " called copy constructor" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->_name << " : Destructs : " << g_destruct[i]  << std::endl;
}

ClapTrap &		ClapTrap::operator=(const ClapTrap & rvalue) {

	std::cout << this->_name << " is now " << rvalue._name << std::endl;
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

void			ClapTrap::rangedAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->_name;
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage; 
	std::cout << " points of damage! : " << g_ranged_attack[i] << std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->_name;
	std::cout << " punches " << target;
	std::cout << ", causing " << this->_melee_attack_damage; 
	std::cout << " points of damage ! : " << g_melee_attack[i] << std::endl;
}

void 			ClapTrap::beRepaired(unsigned int amount){

	if (this->_hit_points < 100) {

		this->_hit_points += amount;
		if (this->_hit_points > 100) {

			this->_hit_points = 100;
		}
		std::cout << this->_name << " HP[" << this->_hit_points << "]: Sweet life juice!" << std::endl;
	}
	else {

		std::cout << this->_name <<  ": I'm a sexy dinosaur! Rawr!" << std::endl;
	}

}

void 			ClapTrap::takeDamage(unsigned int amount){

	int		damage = 0;
	int 	i = std::rand() % NUM;

	if (this->_hit_points > 0) {

		if (amount > _armor_damage_reduction) {

			damage = amount - _armor_damage_reduction;
			this->_hit_points -= damage;
			if (this->_hit_points <= 0) {

				this->_hit_points = 0;
				std::cout << this->_name << " HP[" << this->_hit_points << "] broken!" << std::endl;
			}
			else {

				std::cout << this->_name << " HP[" << this->_hit_points << "] : " << g_hit[i] << std::endl; 
			}
		}
		else {

			std::cout << this->_name << ": Ha-ha, try again looooser!" << std::endl;
		}
	}
	else {

		std::cout << this->_name << " already broken!" << std::endl;
	}
}
