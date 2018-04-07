/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 20:21:58 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/22 22:08:59 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {

    _name.clear();
    std::cout << "Hidden constructor" << std::endl;
}

Victim::Victim(std::string name) {

    _name = name;
    std::cout << "Some random victim called " << _name << " just popped!" << std::endl;
}

Victim::Victim(const Victim& copy) {

    _name = copy.get_name();
}

Victim&     Victim::operator=(const Victim& rvalue) {

    _name = rvalue.get_name();
    return (*this);
}

Victim::~Victim(void) {

    std::cout << "Victim " << this->get_name() << " just died for no apparent reason!" << std::endl; 
    _name.clear();
}

std::ostream&   operator<<(std::ostream& stream, const Victim& input) {

    stream << "I'm " << input.get_name() << " and I like otters!";
    return (stream);
}

void            Victim::set_name(std::string name) {

    _name = name;
}

std::string     Victim::get_name(void) const {

    return (_name);
}

void            Victim::get_polymorphed(void) const {

    std::cout << this->get_name() << " has been turned into a cute little sheep!" << std::endl;
}
