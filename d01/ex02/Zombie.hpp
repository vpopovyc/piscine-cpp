/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 14:55:53 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 14:55:54 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP
# define __ZOMBIE_HPP

# include "main.hpp"

class Zombie {

private:
    std::string     _name;
    std::string     _type;
public:
    Zombie(void);
    ~Zombie(void);
    void            announce(std::string quote);
    // Setters
    void            set_name(std::string input);
    void            set_type(std::string input);
    // Getters
    std::string     get_name(void);
    std::string     get_type(void);
};

#endif 
