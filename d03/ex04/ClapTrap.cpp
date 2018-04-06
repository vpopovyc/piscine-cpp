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

	std::cout << "CL4P-TP constructs : " << g_construct[i] << std::endl;
}

ClapTrap::ClapTrap(std::string & name) {

	int 	i = std::rand() % NUM;

	_name = "CL4P-TP: " + name;
	_level = 1;
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
	this->_energy_points = rvalue._energy_points;
	this->_level = rvalue._level;
	this->_name = rvalue._name;
	this->_melee_attack_damage = rvalue._melee_attack_damage;
	this->_ranged_attack_damage = rvalue._ranged_attack_damage;
	this->_armor_damage_reduction = rvalue._armor_damage_reduction;
	return (*this);
}

std::string		ClapTrap::get_name(void) const {

	return (_name);
}

int             ClapTrap::get_hit_points(void) const {

	return (_hit_points);
}
int             ClapTrap::get_max_hit_points(void) const {

	return (_max_hit_points);
}
int             ClapTrap::get_energy_points(void) const {

	return (_energy_points);
}
int             ClapTrap::get_max_energy_points(void) const {

	return (_max_energy_points);
}
int             ClapTrap::get_level(void) const {

	return (_level);
}
int             ClapTrap::get_melee_attack_damage(void) const {

	return (_melee_attack_damage);
}
int             ClapTrap::get_ranged_attack_damage(void) const {

	return (_ranged_attack_damage);
}
unsigned        ClapTrap::get_armor_damage_reduction(void) const {

	return (_armor_damage_reduction);
}

void 			ClapTrap::set_name(std::string input) {

	this->_name = input;
}

void 			ClapTrap::set_hit_points(int input) {

	this->_hit_points = input;
}
void 			ClapTrap::set_max_hit_points(int input) {

	this->_max_hit_points = input;
}
void 			ClapTrap::set_energy_points(int input) {

	this->_energy_points = input;
}
void 			ClapTrap::set_max_energy_points(int input) {

	this->_max_energy_points = input;
}
void 			ClapTrap::set_level(int input) {

	this->_level = input;
}
void 			ClapTrap::set_melee_attack_damage(int input) {

	this->_melee_attack_damage = input;
}
void 			ClapTrap::set_ranged_attack_damage(int input) {

	this->_ranged_attack_damage = input;
}
void 			ClapTrap::set_armor_damage_reduction(unsigned input) {

	this->_armor_damage_reduction = input;
}

void 			ClapTrap::beRepaired(unsigned int amount){

	if (this->get_hit_points() < 100) {

		this->set_hit_points(this->get_hit_points() + amount);
		if (this->get_hit_points() > 100) {

			this->set_hit_points(100);
		}
		std::cout << this->get_name() << " HP[" << this->get_hit_points() << "]: Sweet life juice!" << std::endl;
	}
	else {

		std::cout << this->get_name() <<  ": I'm a sexy dinosaur! Rawr!" << std::endl;
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
