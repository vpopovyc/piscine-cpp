/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:25:57 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:25:59 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() {}

DeepCoreMiner::~DeepCoreMiner() {}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &copy) { *this = copy;}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner &/*rvalue*/) { return *this; }

void DeepCoreMiner::mine(IAsteroid *iAsteroid)
{
	std::cout << "* mining deep ... got " << iAsteroid->beMined(this) << "! *" << std::endl;
}

void DeepCoreMiner::mine(const IAsteroid *iAsteroid) const
{
	std::cout << "* mining deep ... got " << iAsteroid->beMined(this) << "! *" << std::endl;
}
