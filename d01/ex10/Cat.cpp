/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 18:14:28 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 18:14:30 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(int ac, char *av[]) {

    if (ac == 1)
        _parser(std::cin);
    _open_filestreams(ac, av);
    _print_filestreams(ac, av);
}

Cat::~Cat(void) {

    delete[] _stream;
}

void    Cat::_open_filestreams(int ac, char *av[]) {

    _stream = new std::ifstream[ac - 1];

    for (int x = 0, i = 1; i < ac; ++x, ++i) {

        _stream[x].open(av[i]);
    }
}

void    Cat::_print_filestreams(int ac, char *av[]) {

    for (int i = 0; i < ac - 1; ++i) {

        if (_stream[i].is_open()) {

            _parser(_stream[i]);
        }
        else {

            if (av[i + 1][0] == '-' && strlen(av[i + 1]) == 1) {

                _parser(std::cin);
                continue ;
            }
            std::cout << av[0] << ": " << av[i + 1] << ": No such file or directory" << std::endl; 
        }
    }
}

void    Cat::_parser(std::istream& fd) {

    std::string     line;

    while (std::getline(fd, line)) {

        std::cout << line << std::endl;
    }
}


