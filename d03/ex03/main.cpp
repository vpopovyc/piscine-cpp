/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 17:46:43 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/20 17:46:45 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void) {

	std::srand(unsigned(std::time(0)));
	std::string name("Ivan");
	std::string name2("Scot");
	std::string	name3("Vaska");
	std::string	name4("Ninja");


	ClapTrap 	ivan(name);
	FragTrap	scot(name2);
	ScavTrap 	vaska(name3);
	NinjaTrap 	ninja(name4);

	std::cout << "~~~~~~Damage Test~~~~~~~" << std::endl;
	scot.takeDamage(100);
	ivan.takeDamage(90);
	vaska.takeDamage(90);
	std::cout << "~~~~~~Damage Test~~~~~~~" << std::endl;


	std::cout << "~~~~~~Repair Test~~~~~~~" << std::endl;
	scot.beRepaired(50);
	ivan.beRepaired(50);
	vaska.beRepaired(50);
	std::cout << "~~~~~~Repair Test~~~~~~~" << std::endl;

	std::cout << "~~~~~~meleeAttack Test~~~~~~~" << std::endl;
	scot.meleeAttack("Vasiliy");
	ivan.meleeAttack("Vasiliy");
	vaska.meleeAttack("Vasiliy");
	std::cout << "~~~~~~meleeAttack Test~~~~~~~" << std::endl;

	std::cout << "~~~~~~rangedAttack Test~~~~~~~" << std::endl;
	scot.rangedAttack("Vasiliy");
	ivan.rangedAttack("Vasiliy");
	vaska.rangedAttack("Vasiliy");
	std::cout << "~~~~~~rangedAttack Test~~~~~~~" << std::endl;

	std::cout << "~~~~~~speciallAttack Test~~~~~~~" << std::endl;
	scot.vaulthunter_dot_exe("Vasiliy");
	vaska.challengeNewcomer();
	ninja.NinjaShoebox(ivan);
	ninja.NinjaShoebox(scot);
	ninja.NinjaShoebox(vaska);
	ninja.NinjaShoebox(ninja);
	std::cout << "~~~~~~speciallAttack Test~~~~~~~" << std::endl;
	return (0);
}
