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
    // Coplien’s form
    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(ClapTrap & copy);
    ClapTrap &      operator=(const ClapTrap & rvalue);
    // Task
    ClapTrap(std::string & name);
    virtual void    rangedAttack(std::string const & target) = 0;
    virtual void    meleeAttack(std::string const & target) = 0;
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    // Getters
    std::string     get_name(void) const;
    int             get_hit_points(void) const;
    int             get_max_hit_points(void) const;
    int             get_energy_points(void) const;
    int             get_max_energy_points(void) const;
    int             get_level(void) const;
    int             get_melee_attack_damage(void) const;
    int             get_ranged_attack_damage(void) const;
    unsigned        get_armor_damage_reduction(void) const;
    // Setters
    void            set_name(std::string input);
    void            set_hit_points(int input);
    void            set_max_hit_points(int input);
    void            set_energy_points(int input);
    void            set_max_energy_points(int input);
    void            set_level(int input);
    void            set_melee_attack_damage(int input);
    void            set_ranged_attack_damage(int input);
    void            set_armor_damage_reduction(unsigned input);
    //  Virtual primary info setters 
    virtual void    set_primary_hit_points(void) = 0;
    virtual void    set_primary_max_hit_points(void) = 0;
    virtual void    set_primary_energy_points(void) = 0;
    virtual void    set_primary_max_energy_points(void) = 0;
    virtual void    set_primary_level(void) = 0;
    virtual void    set_primary_melee_attack_damage(void) = 0;
    virtual void    set_primary_ranged_attack_damage(void) = 0;
    virtual void    set_primary_armor_damage_reduction(void) = 0;
};

extern std::string  g_melee_attack[];
extern std::string  g_ranged_attack[];
extern std::string  g_construct[];
extern std::string  g_destruct[];
extern std::string  g_hit[];

#endif /* __CLAPTRAP_HPP */  
