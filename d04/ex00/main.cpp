/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 16:14:46 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/22 22:42:25 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void) {

    Sorcerer    Gendalf("Gendalf", "The Gray");
    Victim      Sauron("Sauron");
    Peon        Pegas("Pegas");

    std::cout << Gendalf << std::endl << Sauron << std::endl <<  Pegas << std::endl;
    Gendalf.polymorph(Sauron);
    Gendalf.polymorph(Pegas);
    return (0);
}
