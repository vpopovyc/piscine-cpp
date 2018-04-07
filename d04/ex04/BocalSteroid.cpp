/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:22:25 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 22:22:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BocalSteroid.hpp"

BocalSteroid::BocalSteroid() {}

BocalSteroid::~BocalSteroid() {}

BocalSteroid::BocalSteroid(const BocalSteroid &copy) { *this = copy; }

BocalSteroid &BocalSteroid::operator=(const BocalSteroid &/*rvalue*/) { return *this; }

std::string BocalSteroid::getName() const { return "~ BocalSteroid ~"; }

std::string BocalSteroid::beMined(StripMiner */*stripMiner*/) const { return "Krpite"; }

std::string BocalSteroid::beMined(DeepCoreMiner */*deepCoreMiner*/) const { return "Zazium"; }

std::string BocalSteroid::beMined(const StripMiner */*stripMiner*/) const { return "Krpite"; }

std::string BocalSteroid::beMined(const DeepCoreMiner */*deepCoreMiner*/) const { return "Zazium"; }

