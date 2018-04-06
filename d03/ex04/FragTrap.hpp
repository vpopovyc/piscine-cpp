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
# include "ClapTrap.hpp"

# define VAULTENCOST    25

class FragTrap : public virtual ClapTrap {

public:
    // Coplien's form
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(FragTrap & copy);
    FragTrap &      operator=(const FragTrap & rvalue);
    // Task
    FragTrap(std::string & name);
    void            vaulthunter_dot_exe(std::string const & target);
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


extern std::string  g_vault[];

#endif /* __FRAGTRAP_HPP */
