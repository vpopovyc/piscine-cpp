/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:03:18 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:13:27 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include "AsteroBocal.hpp"
#include "BocalSteroid.hpp"
#include "MiningBarge.hpp"

int main(void)
{
	{
		IAsteroid *asteroid = new AsteroBocal();
		IAsteroid *asteroid2 = new BocalSteroid();


		IMiningLaser *laser = new StripMiner();

		laser->mine(asteroid);
		laser->mine(asteroid2);
	}

	{

		const IAsteroid *asteroid = new AsteroBocal();
		const IAsteroid *asteroid2 = new BocalSteroid();

		const IMiningLaser *laser = new StripMiner();

		laser->mine(asteroid);
		laser->mine(asteroid2);
	}

	{
		IAsteroid *asteroid = new AsteroBocal();
		IAsteroid *asteroid2 = new BocalSteroid();

		IMiningLaser *laser = new StripMiner();
		IMiningLaser *laser2 = new DeepCoreMiner();

		MiningBarge *barge = new MiningBarge();

		barge->equip(laser);
		barge->equip(laser2);

		barge->mine(asteroid);
		barge->mine(asteroid2);
	}

	{
		IAsteroid *asteroid = new AsteroBocal();
		IAsteroid *asteroid2 = new BocalSteroid();

		IMiningLaser *laser = new StripMiner();
		IMiningLaser *laser2 = new DeepCoreMiner();
		IMiningLaser *laser3 = new StripMiner();
		IMiningLaser *laser4 = new DeepCoreMiner();

		MiningBarge *barge = new MiningBarge();

		barge->equip(laser);
		barge->equip(laser2);
		barge->equip(laser3);
		barge->equip(laser4);

		barge->mine(asteroid);
		barge->mine(asteroid2);
	}
}

