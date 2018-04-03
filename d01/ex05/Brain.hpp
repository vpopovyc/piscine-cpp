/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 19:38:22 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 19:38:23 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP
# define __BRAIN_HPP

# include <string>
# include <sstream>
# include <iostream>

class Brain {


private:
	int				_iq;

public:
	Brain(void);
	~Brain(void);
	void			set_iq(int input);
	int 			get_iq(void);
	std::string 	identify(void) const;

};

#endif
