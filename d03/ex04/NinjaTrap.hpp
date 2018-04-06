/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 14:46:29 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/21 14:46:30 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __NINJATRAP_HPP
# define __NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {

public:
	// Coplien's form
	NinjaTrap(void);
	~NinjaTrap(void);
    NinjaTrap(NinjaTrap & copy);
    NinjaTrap &      operator=(const NinjaTrap & rvalue);	
    // Task
    NinjaTrap(std::string & name);
    void			 NinjaShoebox(ClapTrap & input);
    void			 NinjaShoebox(FragTrap & input);
    void			 NinjaShoebox(ScavTrap & input);
    void			 NinjaShoebox(NinjaTrap & input);
    void    		 rangedAttack(std::string const & target);
    void    		 meleeAttack(std::string const & target);
    // Define primary info setters
    void    		 set_primary_hit_points(void);
    void    		 set_primary_max_hit_points(void);
    void    		 set_primary_energy_points(void);
    void    		 set_primary_max_energy_points(void);
    void    		 set_primary_level(void);
    void    		 set_primary_melee_attack_damage(void);
    void    		 set_primary_ranged_attack_damage(void);
    void    		 set_primary_armor_damage_reduction(void);
};

#endif /* __NINJATRAP_HPP */
