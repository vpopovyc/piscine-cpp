/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:55:18 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 17:55:19 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

bool ZombieHorde::_random_init = 0;

ZombieHorde::ZombieHorde(void) {

	_horde = new Zombie[1];
	_size_of_horde = 1;
	_generate_attr(_horde[0]);
}

ZombieHorde::ZombieHorde(int N) {

	if (N < 0)
		N = -N;
	else if (N == 0)
		N = 1;
	this->_rnd_init();
	_horde = new Zombie[N];
	_size_of_horde = N;
	for (int i = 0; i < _size_of_horde; i++)
		_generate_attr(_horde[i]);
}

ZombieHorde::~ZombieHorde(void) {

	delete[] _horde;
}

void	ZombieHorde::_rnd_init(void) {

    if (this->_random_init == false) {
        
        std::srand(unsigned(std::time(0)));
        this->_random_init = true;
    }
}

void	ZombieHorde::_generate_attr(Zombie& person) {

    int     i_name;
    int     i_type;
    int     i_quote;

    i_name = std::rand() % NUM;
    i_type = std::rand() % NUM;
    i_quote = std::rand() % NUM;
    person.set_name(g_names[i_name]);
    person.set_type(g_types[i_type]);
}

void	ZombieHorde::announce(void) {

	int 	i_quote;

	for (int i = 0; i < _size_of_horde; i++) {
	
		i_quote = std::rand() % NUM;
		this->_horde[i].announce(g_quotes[i_quote]);
	}
}
