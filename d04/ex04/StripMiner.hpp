/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:30:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:30:50 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STRIP_MINER_HPP
# define __STRIP_MINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		~StripMiner();
		StripMiner(const StripMiner &copy);
		StripMiner &operator=(const StripMiner &/*rvalue*/);
		void mine(IAsteroid *iAsteroid);
		void mine(const IAsteroid *iAsteroid) const;
};

#endif
