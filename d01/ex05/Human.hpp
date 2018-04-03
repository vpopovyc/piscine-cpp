/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 19:38:33 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 19:38:34 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_HPP
# define __HUMAN_HPP

# include <string>
# include "Brain.hpp"

class Human {

private:
	const Brain  _brain;

public:
	Human(void);
	~Human(void);
	const Brain& 	getBrain(void);
	std::string		identify(void) const;
};

#endif
