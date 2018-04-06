/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 22:13:47 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/20 22:13:48 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP
# define __CLAPTRAP_HPP

# include <string>
# include <iostream>

# define NUM 5

class ClapTrap {

protected:
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
    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(ClapTrap & copy);
    ClapTrap(std::string & name);
    ClapTrap &      operator=(const ClapTrap & rvalue);
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
};

extern std::string  g_melee_attack[];
extern std::string  g_ranged_attack[];
extern std::string  g_construct[];
extern std::string  g_destruct[];
extern std::string  g_hit[];

#endif /* __CLAPTRAP_HPP */  
