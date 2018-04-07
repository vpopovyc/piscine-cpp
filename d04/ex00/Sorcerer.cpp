/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 14:53:07 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/22 22:03:28 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {

    std::cout << "Hidden constructor" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copy) {

    _name = copy.get_name();
    _title = copy.get_title();
}

Sorcerer::Sorcerer(std::string name, std::string title) {

    _name = name;
    _title = title;
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void) {

    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
    _name.clear();
    _title.clear();
}

Sorcerer&       Sorcerer::operator=(const Sorcerer& rvalue) {

    _name = rvalue.get_name();
    _title = rvalue.get_title();
    return (*this);
}

std::ostream&   operator<<(std::ostream& stream, const Sorcerer& input) {

    stream << "I'm " << input.get_name() << ", " << input.get_title() << ", and I like ponies!";
    return (stream);
}

void            Sorcerer::set_name(std::string name) {

    _name = name;
}

void            Sorcerer::set_title(std::string title) {

    _title = title;
}

std::string     Sorcerer::get_name(void) const {

    return (_name);
}

std::string     Sorcerer::get_title(void) const {

    return (_title);
}

void            Sorcerer::polymorph(Victim const & input) {

    input.get_polymorphed();
}
