/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 14:56:29 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 14:56:31 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include "ZombieHorde.hpp" 

int     main(void) {

	ZombieHorde		horde(0);

	horde.announce();
	return (0);
}
