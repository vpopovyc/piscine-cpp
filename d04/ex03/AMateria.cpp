/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 14:44:06 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 16:03:29 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type(""), _xp(0) {}

AMateria::~AMateria(void) {}

AMateria::AMateria(const AMateria& copy) : _type(copy.get_type()), _xp(copy.get_xp()) {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria&       AMateria::operator=(const AMateria& rvalue) {

   set_type(rvalue.get_type());
   set_xp(rvalue.get_xp());
   return (*this);
}


std::string const &     AMateria::get_type(void) const { return (_type); }

unsigned int            AMateria::get_xp(void) const { return (_xp); }

void                    AMateria::set_type(const std::string & type) { _type = type; }

void                    AMateria::set_xp(unsigned int xp) { _xp = xp; }

void                    AMateria::use(ICharacter& target)
{
    std::cout << "Non material use of materia at " << target.get_name() << std::endl;
}

void                    AMateria::eval_materia(void) { _xp += 10; }
