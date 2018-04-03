/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 12:54:32 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 12:54:34 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __REPLACE_HPP
# define __REPLACE_HPP

# include <string>
# include <fstream>
# include <sstream>
# include <iostream>

class Replace {

private:
	std::string 	_filename;
	std::string 	_filecontent;
	std::string 	_s1;
	std::string 	_s2;
	void			_set_string_fs(void);
	void			_get_fs_string(void);

public:
	Replace(std::string filename, std::string s1, std::string s2);
	~Replace(void);
	
	void			replace(void);
};

#endif
