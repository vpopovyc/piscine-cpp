/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 16:53:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/21 16:53:49 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {

	int 	i = std::rand() % NUM;

	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	std::cout << "SP7G-TP constructs : " << g_construct[i] << std::endl;
}

SuperTrap::SuperTrap(std::string & name) {

	int 	i = std::rand() % NUM;

	this->set_name("SP7G-TP: " + name);
	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	std::cout << this->get_name() << " : Constructs : " << g_construct[i] << std::endl;
	std::cout << this->get_name() << " " << this->get_hit_points() << " " << this->get_max_hit_points() << " " << this->get_energy_points() 
	<< " " << this->get_max_energy_points() << " " <<	this->get_level() << " " <<  this->get_melee_attack_damage() << " " << this->get_ranged_attack_damage() << " " << this->get_armor_damage_reduction() << std::endl;
}

SuperTrap::~SuperTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name() << " : Destructs : " << g_destruct[i]  << std::endl;
}

SuperTrap::SuperTrap(SuperTrap & copy) {

	std::cout << this->get_name() << " called copy constructor" << std::endl;
	*this = copy;
}

SuperTrap &		SuperTrap::operator=(const SuperTrap & rvalue) {

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

void            SuperTrap::rangedAttack(std::string const & target) {

	FragTrap::rangedAttack(target);
}
void            SuperTrap::meleeAttack(std::string const & target) {

	NinjaTrap::meleeAttack(target);
}

void    		SuperTrap::set_primary_hit_points(void) {

	FragTrap::set_primary_hit_points();
}

void    		SuperTrap::set_primary_max_hit_points(void) {

	FragTrap::set_primary_max_hit_points();
}

void    		SuperTrap::set_primary_energy_points(void) {

	NinjaTrap::set_primary_energy_points();
}

void    		SuperTrap::set_primary_max_energy_points(void) {

	NinjaTrap::set_primary_max_energy_points();
}

void    		SuperTrap::set_primary_level(void) {

	this->set_level(1);
}

void    		SuperTrap::set_primary_melee_attack_damage(void) {

	NinjaTrap::set_primary_melee_attack_damage();
}

void    		SuperTrap::set_primary_ranged_attack_damage(void) {

	FragTrap::set_primary_ranged_attack_damage();
}

void    		SuperTrap::set_primary_armor_damage_reduction(void) {

	FragTrap::set_primary_armor_damage_reduction();
}
