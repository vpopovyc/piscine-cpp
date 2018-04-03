/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 19:38:14 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 19:38:16 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

    std::srand(unsigned(std::time(0)));
	_iq = std::rand();
}

Brain::~Brain(void) {

}

std::string	Brain::identify(void) const {

	std::stringstream 	ss;

	ss << this;
	return (ss.str());
}

void	Brain::set_iq(int input) {

	_iq = input;
}

int 	Brain::get_iq(void) {

	return (_iq);
}
