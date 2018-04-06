/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 21:44:14 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/20 21:44:15 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP
# define __SCAVTRAP_HPP

# include <string>
# include <iostream>
#include "ClapTrap.hpp"

# define CHALLENCOST    25

class ScavTrap : public ClapTrap {

public:
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(ScavTrap & copy);
    ScavTrap(std::string & name);
    ScavTrap &      operator=(const ScavTrap & rvalue);
    void            challengeNewcomer(void);
};

extern std::string  g_challenge[];

#endif /* __SCAVTRAP_HPP */
