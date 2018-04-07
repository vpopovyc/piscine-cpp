/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:23:14 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:25:49 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DEEP_CORE_MINER_HPP
# define __DEEP_CORE_MINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner();
		~DeepCoreMiner();
		DeepCoreMiner(const DeepCoreMiner &copy);
		DeepCoreMiner &operator=(const DeepCoreMiner &/*rvalue*/);
		void mine(IAsteroid *iAsteroid);
		void mine(const IAsteroid *iAsteroid) const;
};

#endif
