/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 17:46:32 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/20 17:46:33 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP
# define __FRAGTRAP_HPP

# include <string>
# include <iostream>

# define NUM            5
# define VAULTENCOST    25

class FragTrap {

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
    static bool     _random_init;
    static void     _rnd_init(void);   

public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(FragTrap & copy);
    FragTrap(std::string & name);
    FragTrap &      operator=(const FragTrap & rvalue);
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            vaulthunter_dot_exe(std::string const & target);
};

extern std::string  g_melee_attack[];
extern std::string  g_ranged_attack[];
extern std::string  g_construct[];
extern std::string  g_destruct[];
extern std::string  g_vault[];
extern std::string  g_hit[];

#endif /* __FRAGTRAP_HPP */
