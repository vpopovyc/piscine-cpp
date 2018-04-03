/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:29:54 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 21:29:55 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP
# define __WEAPON_HPP

# include <string>

class Weapon {

private:
	std::string 			_type;

public:
	Weapon(void);
	Weapon(std::string input);
	~Weapon(void);
	const std::string& 		getType(void);
	void					setType(std::string input);

};


#endif /* __WEAPON_HPP */
