/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:33:28 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 22:34:24 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MINING_BARGE_HPP
# define __MINING_BARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	private:
		IMiningLaser **m_lasers;

	public:
		MiningBarge();
		~MiningBarge();
		MiningBarge(const MiningBarge &copy);
		MiningBarge &operator=(const MiningBarge &rvalue);

		IMiningLaser *getLaser(int i) const;

		void equip(IMiningLaser* laser);
        void mine(IAsteroid* asteroid) const;
};

#endif
