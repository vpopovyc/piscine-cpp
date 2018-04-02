/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 11:58:37 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/10 11:58:39 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int		       main(int ac, char *av[]) {
    
    std::string::iterator   i;
    std::string             argv;

    if (ac > 1) {
        for(int n = 1; n < ac; ++n) {
            argv = av[n];
            for (i = argv.begin(); argv.end() != i; ++i) {
                *i = toupper(*i);
            }
            std::cout << argv;
        }
        std::cout << std::endl;
    }
    else { 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}
