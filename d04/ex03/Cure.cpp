/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:56:16 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 16:15:29 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {

}

Cure::~Cure(void){

	std::cout << "~ Cure materia dissapeared ~" << std::endl;
}

Cure::Cure(const Cure & copy) : AMateria(copy) {

}

Cure&            Cure::operator=(const Cure& rvalue)
{

    return (static_cast<Cure&>(AMateria::operator=(rvalue)));
}

void            Cure::use(ICharacter & target) {

    std::cout << "* heals " << target.get_name() << "’s wounds *" << std::endl;
    eval_materia();
}

Cure*            Cure::clone(void) const
{
    return new Cure(*this);
}