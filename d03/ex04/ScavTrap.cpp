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

	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	this->set_name ("Bastard SC4V-TP");
	std::cout << "SC4V-TP constructs : " << g_construct[i] << std::endl;
}

ScavTrap::ScavTrap(std::string & name) : ClapTrap() {

	int 	i = std::rand() % NUM;

	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	this->set_name("SC4V-TP: " + name);
	std::cout << this->get_name() << " : Constructs : " << g_construct[i] << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & copy) {

	std::cout << this->get_name() << " called copy constructor" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name() << " : Destructs : " << g_destruct[i]  << std::endl;
}

ScavTrap &		ScavTrap::operator=(const ScavTrap & rvalue) {

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

void	 		ScavTrap::challengeNewcomer(void) {

	int 	i = std::rand() % NUM;

	if (this->get_energy_points() >= CHALLENCOST) {
		std::cout << "SC4V-TP: " << this->get_name() << ": " + g_challenge[i] << std::endl;
		this->set_energy_points(this->get_energy_points() - CHALLENCOST);
	}
	else {

		std::cout << "SC4V-TP: " << this->get_name() << ": shit..." << std::endl;
	}
}

void			ScavTrap::meleeAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name();
	std::cout << " punches " << target;
	std::cout << ", causing " << this->get_melee_attack_damage();
	std::cout << " points SCAV of damage ! : " << g_melee_attack[i] << std::endl;
}

void			ScavTrap::rangedAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name();
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->get_ranged_attack_damage();
	std::cout << " points SCAV of damage! : " << g_ranged_attack[i] << std::endl;
}

void    		ScavTrap::set_primary_hit_points(void) {

	this->set_hit_points(100);
}

void    		ScavTrap::set_primary_max_hit_points(void) {

	this->set_max_hit_points(100);
}

void    		ScavTrap::set_primary_energy_points(void) {

	this->set_energy_points(50);
}

void    		ScavTrap::set_primary_max_energy_points(void) {

	this->set_max_energy_points(50);
}

void    		ScavTrap::set_primary_level(void) {

	this->set_level(1);
}

void    		ScavTrap::set_primary_melee_attack_damage(void) {

	this->set_melee_attack_damage(20);
}

void    		ScavTrap::set_primary_ranged_attack_damage(void) {

	this->set_ranged_attack_damage(15);
}

void    		ScavTrap::set_primary_armor_damage_reduction(void) {

	this->set_armor_damage_reduction(3);
}
