/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 13:02:13 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/10 13:02:15 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

int main(void)
{

	Phone			phonebook;
	std::string  	input;

	std::cout << CLEAR_SCR;
	while (42)
	{
		std::cout << "Input command" << std::endl;
		if (feof(stdin))
			phonebook.myexit("Found EOF symbol: exiting");
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (input.compare("EXIT") == 0)
			phonebook.myexit("Exiting");
		else
			std::cout << CLEAR_SCR;
	}
 	return (0);
}
