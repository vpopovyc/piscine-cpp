/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 20:55:13 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/22 21:23:35 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {

    std::cout << "Hidden constructor" << std::endl;
}

Peon::Peon(std::string name) : Victim(name) {

    std::cout << "Zog zog!" << std::endl;
}

Peon::Peon(const Peon& copy) {

    set_name(copy.get_name());
}

Peon&     Peon::operator=(const Peon& rvalue) {

    set_name(rvalue.get_name());
    return (*this);
}

Peon::~Peon(void) {

    std::cout << "Bleuark...!" << std::endl; 
}

void            Peon::get_polymorphed(void) const {

    std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}
