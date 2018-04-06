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

# define NUM            5
# define CHALLENCOST    25

class ScavTrap {

private:
    int             _hit_points;
    int             _max_hit_points;
    int             _energy_points;
    int             _max_energy_points;
    int             _level;
    std::string     _name;
    int             _melee_attack_damage;
    int             _ranged_attack_damage;
    unsigned        _armor_damage_reduction;

public:
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(ScavTrap & copy);
    ScavTrap(std::string & name);
    ScavTrap &      operator=(const ScavTrap & rvalue);
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            challengeNewcomer(void);
};

extern std::string  g_melee_attack[];
extern std::string  g_ranged_attack[];
extern std::string  g_construct[];
extern std::string  g_destruct[];
extern std::string  g_challenge[];
extern std::string  g_hit[];

#endif /* __SCAVTRAP_HPP */
