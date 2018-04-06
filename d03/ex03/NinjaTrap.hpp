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

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap(void);
	~NinjaTrap(void);
    NinjaTrap(NinjaTrap & copy);
    NinjaTrap(std::string & name);
    NinjaTrap &      operator=(const NinjaTrap & rvalue);	
    void			 NinjaShoebox(ClapTrap & input);
    void			 NinjaShoebox(FragTrap & input);
    void			 NinjaShoebox(ScavTrap & input);
    void			 NinjaShoebox(NinjaTrap & input);
};

#endif /* __NINJATRAP_HPP */
