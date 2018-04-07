/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:17:43 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:19:19 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMINING_LASER_HPP
# define __IMINING_LASER_HPP

#include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid *iAsteroid) = 0;
		virtual void mine(const IAsteroid *iAsteroid) const = 0;
};

#endif
