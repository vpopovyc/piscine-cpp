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

class FragTrap : public ClapTrap {

public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(FragTrap & copy);
    FragTrap(std::string & name);
    FragTrap &      operator=(const FragTrap & rvalue);
    void            vaulthunter_dot_exe(std::string const & target);
};


extern std::string  g_vault[];

#endif /* __FRAGTRAP_HPP */
