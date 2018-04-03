/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 14:43:21 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 14:43:22 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void memoryLeak(void) {

	std::string*	panthere = new std::string("String panthere");
	
	std::cout << *panthere << std::endl;
	delete panthere;
}
