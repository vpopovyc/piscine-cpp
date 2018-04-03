/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 19:21:34 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 19:21:35 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {

	std::string  	sample ("HI THIS IS BRAIN");
	std::string		*p_sample = &sample;
	std::string 	&r_sample = sample;

	std::cout << *p_sample << std::endl;
	std::cout << r_sample << std::endl;
	return (0);
}
