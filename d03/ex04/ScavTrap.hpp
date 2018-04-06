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

class ScavTrap : public virtual ClapTrap {

public:
	// Coplien's form
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(ScavTrap & copy);
    ScavTrap &      operator=(const ScavTrap & rvalue);
    // Task
    ScavTrap(std::string & name);
    void            challengeNewcomer(void);
    void    		rangedAttack(std::string const & target);
    void    		meleeAttack(std::string const & target);
    // Define primary info setters
    void    		set_primary_hit_points(void);
    void    		set_primary_max_hit_points(void);
    void    		set_primary_energy_points(void);
    void    		set_primary_max_energy_points(void);
    void    		set_primary_level(void);
    void    		set_primary_melee_attack_damage(void);
    void    		set_primary_ranged_attack_damage(void);
    void    		set_primary_armor_damage_reduction(void);
};

extern std::string  g_challenge[];

#endif /* __SCAVTRAP_HPP */
