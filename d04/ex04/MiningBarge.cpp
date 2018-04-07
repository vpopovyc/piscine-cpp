/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:34:29 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 22:34:30 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge() : m_lasers(new IMiningLaser*[4])
{
	for (int i = 0; i < 4; ++i)
		m_lasers[i] = NULL;
}

MiningBarge::~MiningBarge()
{
	delete [] m_lasers;
}

MiningBarge::MiningBarge(const MiningBarge &copy) { *this = copy; }

MiningBarge &MiningBarge::operator=(const MiningBarge &rvalue)
{
	for (int i = 0; i < 4; ++i)
		m_lasers[i] = rvalue.getLaser(i);
	return (*this);
}

IMiningLaser *MiningBarge::getLaser(int i) const 
{
	if (i < 0 || i >= 4)
		return (NULL);
	else
		return (m_lasers[i]);
}

void MiningBarge::equip(IMiningLaser *laser)
{
	static int i = 0;

	if (i == 4)
		return ;
	else
	{
		m_lasers[i] = laser;
		++i;
	}
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_lasers[i])
			m_lasers[i]->mine(asteroid);
	}
}
