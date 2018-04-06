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

int		main(void) {

	std::srand(unsigned(std::time(0)));
	std::string name("Scot");
	std::string	name2("Vas'ka");

	FragTrap	  scot(name);
	ScavTrap	  vaska(name2);

	scot.takeDamage(90);
	vaska.takeDamage(90);


	scot.beRepaired(50);
	vaska.beRepaired(50);

	scot.meleeAttack("Vasiliy");
	vaska.meleeAttack("Vasiliy");

	scot.rangedAttack("Vasiliy");
	vaska.rangedAttack("Vasiliy");

	scot.vaulthunter_dot_exe("Vasiliy");
	vaska.challengeNewcomer();
	return (0);
}
