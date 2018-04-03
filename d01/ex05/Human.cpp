/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 19:38:38 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 19:38:40 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {

}

Human::~Human(void) {

}

const Brain&	Human::getBrain(void) {

	return (_brain);
}

std::string		Human::identify(void) const {

	return (_brain.identify());
}
