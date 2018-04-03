/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:55:28 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/13 17:55:29 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIEHORDE_HPP
# define __ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

# define NUM 5


class ZombieHorde {

private:

	int				_size_of_horde;
	Zombie 			*_horde;
	static bool 	_random_init;
	void			_rnd_init(void);
	void			_generate_attr(Zombie& person);

public:

	ZombieHorde(void);
	ZombieHorde(int N);
	~ZombieHorde(void);
	void		announce(void);
};

extern std::string  g_types[];
extern std::string  g_names[];
extern std::string  g_quotes[];

#endif
