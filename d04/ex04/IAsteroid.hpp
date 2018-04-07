/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:19:44 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:20:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef __IASTEROID_HPP
# define __IASTEROID_HPP

class StripMiner;
class DeepCoreMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		
		virtual std::string beMined(StripMiner *stripMiner) const = 0;
		virtual std::string beMined(DeepCoreMiner *deepCoreMiner) const = 0;

		virtual std::string beMined(const StripMiner *stripMiner) const = 0;
		virtual std::string beMined(const DeepCoreMiner *deepCoreMiner) const = 0;

		virtual std::string getName() const = 0;
};

#endif
