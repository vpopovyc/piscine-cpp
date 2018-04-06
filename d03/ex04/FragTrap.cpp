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

FragTrap::FragTrap(void) {
	
	int 	i = std::rand() % NUM;

	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	this->set_name ("Bastard FR4G-TP");
	std::cout << this->get_name() << " : " << g_construct[i] << std::endl;
}

FragTrap::FragTrap(std::string & name) {

	int 	i = std::rand() % NUM;

	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	this->set_name("FR4G-TP: " + name);
	std::cout << this->get_name() << " : Constructs : " << g_construct[i] << std::endl;
}

FragTrap::FragTrap(FragTrap & copy) {

	std::cout << this->get_name() << " called copy constructor" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name() << " : Destructs : " << g_destruct[i]  << std::endl;
}

FragTrap &		FragTrap::operator=(const FragTrap & rvalue) {

	std::cout << this->get_name() << " is now " << rvalue.get_name() << std::endl;
	this->set_hit_points(rvalue.get_hit_points());
	this->set_energy_points(rvalue.get_energy_points());
	this->set_level(rvalue.get_level());
	this->set_name(rvalue.get_name());
	this->set_melee_attack_damage(rvalue.get_melee_attack_damage());
	this->set_ranged_attack_damage(rvalue.get_ranged_attack_damage());
	this->set_armor_damage_reduction(rvalue.get_armor_damage_reduction());
	return (*this);
}

void			FragTrap::meleeAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name();
	std::cout << " punches " << target;
	std::cout << ", causing " << this->get_melee_attack_damage();
	std::cout << " points FRAG of damage ! : " << g_melee_attack[i] << std::endl;
}

void			FragTrap::rangedAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name();
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->get_ranged_attack_damage();
	std::cout << " points FRAG of damage! : " << g_ranged_attack[i] << std::endl;
}

void	 		FragTrap::vaulthunter_dot_exe(std::string const & target) {

	int 	i = std::rand() % NUM;

	if (this->get_energy_points() >= VAULTENCOST) {
		std::cout << this->get_name() << ": " + g_vault[i] << " Target: "<< target << std::endl;
		this->set_energy_points(this->get_energy_points() - VAULTENCOST);
	}
	else {

		std::cout << this->get_name() << ": shit..." << std::endl;
	}
}

void    		FragTrap::set_primary_hit_points(void) {

	this->set_hit_points(100);
}

void    		FragTrap::set_primary_max_hit_points(void) {

	this->set_max_hit_points(100);
}

void    		FragTrap::set_primary_energy_points(void) {

	this->set_energy_points(100);
}

void    		FragTrap::set_primary_max_energy_points(void) {

	this->set_max_energy_points(100);
}

void    		FragTrap::set_primary_level(void) {

	this->set_level(1);
}

void    		FragTrap::set_primary_melee_attack_damage(void) {

	this->set_melee_attack_damage(30);
}

void    		FragTrap::set_primary_ranged_attack_damage(void) {

	this->set_ranged_attack_damage(20);
}

void    		FragTrap::set_primary_armor_damage_reduction(void) {

	this->set_armor_damage_reduction(5);
}
