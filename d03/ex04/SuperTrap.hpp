/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 16:53:54 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/21 16:53:55 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __SUPERTRAP_HPP
# define __SUPERTRAP_HPP 

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public  FragTrap, public  NinjaTrap {

public:
	// Colplien's form
	SuperTrap();
	~SuperTrap();
	SuperTrap(SuperTrap & copy);
	SuperTrap &		operator=(const SuperTrap & rvalue);
	// Task
	SuperTrap(std::string &name);
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    // Define primary info setters
    void    set_primary_hit_points(void);
    void    set_primary_max_hit_points(void);
    void    set_primary_energy_points(void);
    void    set_primary_max_energy_points(void);
    void    set_primary_level(void);
    void    set_primary_melee_attack_damage(void);
    void    set_primary_ranged_attack_damage(void);
    void    set_primary_armor_damage_reduction(void);
};

#endif /* __SUPERTRAP_HPP */

