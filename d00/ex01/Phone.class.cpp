/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:07:52 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/12 16:07:53 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phone.class.hpp>

Phone::Phone(void) {

	_current_cn = FIRST_LAUNCH;
}

Phone::~Phone(void) {

    _current_cn = 0;
}

void Phone::_validate_print_string(std::string string) {

    if (string.length() > 10) {
        
        string.resize(9);
        string += ".";
    }
    std::cout << std::right << std::setw(10) << string << std::setw(1) << "|";
}

void Phone::_print_basic_info(Contact& cn, int i) {

    std::cout << std::right << std::setw(10) << i << std::setw(1) << "|";
    _validate_print_string(cn.get_first_name());
    _validate_print_string(cn.get_last_name());
    _validate_print_string(cn.get_nickname());
}

void Phone::_print_grid(void) {

    for (int i = 0; i < _current_cn; ++i) {

        _print_basic_info(_cn[i], i);
        std::cout << std::left << std::endl;
    }
}

void Phone::myexit(std::string msg) {

    std::cout << msg << std::endl;
    exit(0);
}

int Phone::_readIndex(void) const
{
    std::string index_string;

    std::cout << std::left;
    do {
        std::cout << std::left << "Choose id: ";
        if (feof(stdin)) {
            std::cout << std::left << "Found EOF symbol: exiting" << std::endl;
            exit(-1);
        }
        std::getline(std::cin, index_string);
    }
    while (index_string.size() > 1 || !std::isdigit(*index_string.begin()));
    return (*index_string.begin() - '0');
}

void Phone::search_contact(void) {

    int         index;

    if (_current_cn != FIRST_LAUNCH) {
    
        _print_grid();
        index = _readIndex();
        if (index >= 0 && index < _current_cn) {
            _cn[index].print_contact();
        } else {
            std::cout << "Index out of range" << std::endl;
        }
    }
    else
        std::cout << "No contacts in phonebook" << std::endl;
}

void Phone::add_contact(void) {

    if (_current_cn == FIRST_LAUNCH)
        ++_current_cn;
    _cn[_current_cn].create_contact();
    _current_cn += 1;
    if (_current_cn > CAPACITY)
        myexit("No space left");
}
