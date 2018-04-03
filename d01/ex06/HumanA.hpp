/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:30:15 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 21:30:17 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP
# define __HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
	std::string 	_name;
	Weapon&			_weapon;

public:
	HumanA(void);
	HumanA(std::string input, Weapon& basic_weapon);
	~HumanA(void);
	void				attack(void);
};

#endif /* __HUMANA_HPP */