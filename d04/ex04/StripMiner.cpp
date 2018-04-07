/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:30:33 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:30:34 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner() {}

StripMiner::~StripMiner() {}

StripMiner::StripMiner(const StripMiner &copy) { *this = copy; }

StripMiner &StripMiner::operator=(const StripMiner &/*rvalue*/) { return *this; }

void StripMiner::mine(IAsteroid *iAsteroid)
{
	std::cout << "* strip mining ... got " << iAsteroid->beMined(this) <<  "! *" << std::endl;
}

void StripMiner::mine(const IAsteroid *iAsteroid) const
{
	std::cout << "* strip mining ... got " << iAsteroid->beMined(this) <<  "! *" << std::endl;
}

