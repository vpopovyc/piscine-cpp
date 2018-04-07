/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 14:43:33 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 22:25:34 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


int     main(void) {

    IMateriaSource* src = new MateriaSource();
    src->learn_materia(new Ice());
    src->learn_materia(new Cure());    
    
    {

        IMateriaSource* src2 = src;

        src2->learn_materia(new Ice());
    }
    ICharacter* zaz = new Character("zaz");
    AMateria* tmp;

    // (void)tmp;
    tmp = src->create_materia("ice");
    zaz->equip(tmp);
    tmp = src->create_materia("cure");
    zaz->equip(tmp);
    ICharacter* bob = new Character("bob");
    zaz->use(0, *bob);
    zaz->use(1, *bob);
    delete bob;
    delete zaz;
    delete src;

    return (0);
}