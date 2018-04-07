/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:34:38 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:34:39 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal() {}

AsteroBocal::~AsteroBocal() {}

AsteroBocal::AsteroBocal(const AsteroBocal &copy) { *this = copy; }

AsteroBocal &AsteroBocal::operator=(const AsteroBocal &/*rvalue*/) { return *this; }

std::string AsteroBocal::getName() const { return "~ AsteroBocal ~"; }

std::string AsteroBocal::beMined(StripMiner */*stripMiner*/) const { return "Flavium"; }

std::string AsteroBocal::beMined(DeepCoreMiner */*deepCoreMiner*/) const { return "Thorite"; }

std::string AsteroBocal::beMined(const StripMiner */*stripMiner*/) const { return "Flavium"; }

std::string AsteroBocal::beMined(const DeepCoreMiner */*deepCoreMiner*/) const { return "Thorite"; }
