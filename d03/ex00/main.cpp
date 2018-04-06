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

int		main(void) {

	std::string name("Scot");

	FragTrap	  scot(name);
	scot.takeDamage(90);
	scot.takeDamage(20);
	scot.beRepaired(50);
	scot.beRepaired(100);
	scot.meleeAttack("Vasiliy");
	scot.rangedAttack("Vasiliy");
	scot.vaulthunter_dot_exe("Vasiliy");
	scot.vaulthunter_dot_exe("Vasiliy");
	scot.vaulthunter_dot_exe("Vasiliy");
	scot.vaulthunter_dot_exe("Vasiliy");
	scot.vaulthunter_dot_exe("Vasiliy");
}
