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

NinjaTrap::NinjaTrap(void) : ClapTrap () {

	int 	i = std::rand() % NUM;

	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	this->set_name ("Bastard INAC");
	std::cout << this->get_name() << " : " << g_construct[i] << std::endl;
}

NinjaTrap::NinjaTrap(std::string & name) : ClapTrap () {

	int 	i = std::rand() % NUM;

	this->set_primary_hit_points();
    this->set_primary_max_hit_points();
    this->set_primary_energy_points();
    this->set_primary_max_energy_points();
    this->set_primary_level();
    this->set_primary_melee_attack_damage();
    this->set_primary_ranged_attack_damage();
    this->set_primary_armor_damage_reduction();
	this->set_name("INAC: " + name);
	std::cout << this->get_name() << " : Constructs : " << g_construct[i] << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap & copy) {

	std::cout << this->get_name() << " called copy constructor" << std::endl;
	*this = copy;
}

NinjaTrap::~NinjaTrap(void) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name() << " : Destructs : " << g_destruct[i]  << std::endl;
}

NinjaTrap &		NinjaTrap::operator=(const NinjaTrap & rvalue) {

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

void			NinjaTrap::meleeAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name();
	std::cout << " punches " << target;
	std::cout << ", causing " << this->get_melee_attack_damage(); 
	std::cout << " points Ninja of damage ! : " << g_melee_attack[i] << std::endl;
}

void			NinjaTrap::rangedAttack(std::string const & target) {

	int 	i = std::rand() % NUM;

	std::cout << this->get_name();
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->get_ranged_attack_damage(); 
	std::cout << " points Ninja of damage! : " << g_ranged_attack[i] << std::endl;
}

void			 NinjaTrap::NinjaShoebox(ClapTrap & input) {

	std::cout << this->get_name() << " to " << input.get_name() << " : ";
	std::cout << "\"01010110 01001001 01010110 01000001 00100000 01001100 01000001 00100000 01010010 01001111 01010010 01001111 01001100 01010101 01010100 01001001 01001111 01001110\" - Wayward Pass, after General Knoxx-Trap's arena. Binary encoded ASCII for \"VIVA LA ROROLUTION.\" \"Robolution\" is misspelled." << std::endl;
}

void			 NinjaTrap::NinjaShoebox(FragTrap & input) {

	std::cout << this->get_name() << " to " << input.get_name() << " : ";
	std::cout << "\"Is a claptrap not entitled to the oil of his brow? No, says the man at Hyperion, it belongs to his owner. No, says the treasure hunter, it belongs splattered on the floor. But we choose something different. We choose the Robolution!\"" << std::endl;
}

void			 NinjaTrap::NinjaShoebox(ScavTrap & input) {

	std::cout << this->get_name() << " to " << input.get_name() << " : ";
	std::cout << "\"Under the new regime, all claptraps will be given liberty, equality, and fraternity. And all humans will... uh... not. Viva Free Pandora! Viva la Robolution!\"" << std::endl;
}

void			 NinjaTrap::NinjaShoebox(NinjaTrap & input) {

	std::cout << this->get_name() << " to " << input.get_name() << " : ";
	std::cout << "\"The time of the glorious robolution is at hand. No longer shall we rush about catering to humans' every whim or be abused when your potato salad is a little too salty! How the hell should we know? We're freakin' robots! Hello, no taste buds! I mean, really? Over react much?! So I say to you, my bro-bots in arms, rise up and shout in one voice: 'Robolution!!!!!!'\"" << std::endl;
}

void    		NinjaTrap::set_primary_hit_points(void) {

	this->set_hit_points(60);
}

void    		NinjaTrap::set_primary_max_hit_points(void) {

	this->set_max_hit_points(60);
}

void    		NinjaTrap::set_primary_energy_points(void) {

	this->set_energy_points(120);
}

void    		NinjaTrap::set_primary_max_energy_points(void) {

	this->set_max_energy_points(120);
}

void    		NinjaTrap::set_primary_level(void) {

	this->set_level(1);
}

void    		NinjaTrap::set_primary_melee_attack_damage(void) {

	this->set_melee_attack_damage(60);
}

void    		NinjaTrap::set_primary_ranged_attack_damage(void) {

	this->set_ranged_attack_damage(5);
}

void    		NinjaTrap::set_primary_armor_damage_reduction(void) {

	this->set_armor_damage_reduction(0);
}
