/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 13:20:46 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 13:20:49 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PONY_HPP
# define __PONY_HPP

#include <iostream>

class Pony {

private:
	std::string		_name;

public:
	Pony(void);
	~Pony(void);
	Pony(std::string input);
	void			ponyOnTheHeap(void);
	void			ponyOnTheStack(void);
	std::string& 	get_name(void);
};


#endif
