/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 12:54:09 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 12:54:10 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Replace.hpp"


int		bad_input(int ac, char *av[]) {

	std::string 	input;

	if (ac == 4) {

		for (unsigned int i = 1; i < 4; i++) {

			if ((input = av[i]).empty())
				return(1);
		}
		return(0);
	}
	return(1);
}

int 	main(int ac, char *av[]) {

	if (bad_input(ac, av)) {

		std::cout << "Bad input :(" <<  std::endl;
		return (1);
	}
	
	Replace		prog(av[1], av[2], av[3]);

	prog.replace();
}
