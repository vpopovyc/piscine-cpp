/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 14:56:13 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 14:56:14 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIEEVENT_HPP
# define __ZOMBIEEVENT_HPP

# include "main.hpp"

class ZombieEvent {

private:
    std::string     _zombie_type;
    static bool     _random_init;

public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    void            setZombieType(std::string type);
    Zombie          *newZombie(std::string name);
    void            randomChump(void);

};

#endif
