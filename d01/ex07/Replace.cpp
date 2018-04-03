/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 12:54:21 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 12:54:22 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) {

	_s1 = s1;
	_s2 = s2;
	_filename = filename;
}

Replace::~Replace(void) {

	_s1.clear();
	_s2.clear();
	_filename.clear();
}

void	Replace::_get_fs_string(void) {

	std::ifstream 		file(_filename);
	std::stringstream	ss;

	if (file.is_open()) {
	
		ss << file.rdbuf();
		_filecontent = ss.str();
	}
	else {

		std::cout << "Bad filename :(" << std::endl;
	}
}

void	Replace::_set_string_fs(void) {

	std::ofstream		file(_filename + ".replace");

	file << _filecontent;
	file.close();
}

void	Replace::replace(void) {

	unsigned 	s1_size;

	this->_get_fs_string();
	s1_size = _s1.size();
	for (size_t pos = 0; (pos = _filecontent.find(_s1, pos)) != std::string::npos; pos += s1_size) {

		_filecontent.replace(pos, s1_size, _s2);
	}
	this->_set_string_fs();
}
