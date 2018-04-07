/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:42:07 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 16:15:40 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::~Ice(void) { AMateria::~AMateria(); }

Ice::Ice(const Ice & copy) : AMateria::AMateria(copy) { }

Ice&            Ice::operator=(const Ice& rvalue)
{
    return (static_cast<Ice&>(AMateria::operator=(rvalue)));
}

void            Ice::use(ICharacter & target) {

    std::cout << "* shoots an ice bolt at " << target.get_name() << " *" << std::endl;
    eval_materia();
}

Ice*            Ice::clone(void) const
{
    return new Ice(*this);
}