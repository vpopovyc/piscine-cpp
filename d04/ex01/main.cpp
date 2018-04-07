/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 14:16:52 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 19:59:04 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "AEnemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void) {
 
 {
    PowerFist     *pf = new PowerFist();
    PlasmaRifle   *pr = new PlasmaRifle();

    std::cout << *pr;
    std::cout << *pf;
    
    pr->attack();
    pf->attack();
    
    delete pf;
    delete pr;
 }
 {
     SuperMutant    *sp = new SuperMutant();
     RadScorpion    *rs = new RadScorpion();
     
     std::cout << *sp << *rs;

     sp->take_damage(10);
     rs->take_damage(-10);

     std::cout << *sp << *rs << std::endl;
     
     delete sp;
     delete rs;
 }
 {
     Character      *zaz = new Character("zaz");
     SuperMutant    *sp = new SuperMutant();
     RadScorpion    *rs = new RadScorpion();
     PowerFist      *pf = new PowerFist();
     PlasmaRifle    *pr = new PlasmaRifle();
    
     std::cout << *zaz;
     zaz->equip(pr);
     zaz->attack(sp);
     std::cout << *zaz;
     zaz->equip(pf);
     zaz->attack(rs);
     std::cout << *zaz;
     zaz->equip(pr);
     std::cout << *zaz;
     zaz->attack(rs);
     std::cout << *zaz;
     zaz->attack(rs);
     std::cout << *zaz;
 }
    return (0);
}