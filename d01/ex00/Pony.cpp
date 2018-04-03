/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 13:19:12 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 13:19:14 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


Pony::Pony(void) {

	_name.clear();
}

Pony::Pony(std::string input) {

	_name = input;
}

Pony::~Pony(void) {

	_name.clear();
}

std::string& Pony::get_name(void) {

	return (_name);
}

void Pony::ponyOnTheStack(void) {

	Pony 	ponyOnTheStack("Stack");

	std::cout << "Automatic storage – ";
	std::cout << "Get name: " << ponyOnTheStack.get_name() << std::endl;
}

void Pony::ponyOnTheHeap(void) {

	Pony 	*ponyOnTheHeap;

	std::cout << "Dynamic storage – ";
	ponyOnTheHeap = new Pony("Heap");
	std::cout << "Get name: " << ponyOnTheHeap->get_name() << std::endl;
	delete ponyOnTheHeap;
	std::cout << "Deleting" << std::endl;
	std::cout << "Get name: " << ponyOnTheHeap->get_name() << std::endl;
}
