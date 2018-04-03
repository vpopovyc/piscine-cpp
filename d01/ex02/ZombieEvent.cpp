/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 14:56:04 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 14:56:06 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

bool ZombieEvent::_random_init = 0;

ZombieEvent::ZombieEvent(void) {

    _zombie_type.clear();
}

ZombieEvent::~ZombieEvent(void) {

    _zombie_type.clear();
}

void        ZombieEvent::setZombieType(std::string type) {

    _zombie_type = type;
}

Zombie      *ZombieEvent::newZombie(std::string name) {

    Zombie *newZombie;

    newZombie = new Zombie();
    newZombie->set_name(name);
    newZombie->set_type(_zombie_type);
    return (newZombie);
}

void        ZombieEvent::randomChump(void) {

    Zombie  *tmp_zombie;
    int     i_name;
    int     i_type;
    int     i_quote;

    if (_random_init == false) {
        
        std::srand(unsigned(std::time(0)));
        _random_init = true;
    }
    i_name = std::rand() % NUM;
    i_type = std::rand() % NUM;
    i_quote = std::rand() % NUM;
    setZombieType(g_types[i_type]);
    tmp_zombie = newZombie(g_names[i_name]);
    tmp_zombie->announce(g_quotes[i_quote]);
    delete tmp_zombie;
}
