/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:30:31 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 21:30:33 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP
# define __HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:
	std::string 	_name;
	Weapon*			_weapon;

public:
	HumanB(void);
	HumanB(std::string input);
	~HumanB(void);
	void				attack(void);
	void				setWeapon(Weapon& basic_weapon);
};

#endif /* __HUMANB_HPP */
