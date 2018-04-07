/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:34:30 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 19:34:31 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ASTERO_BOCAL_HPP
# define __ASTERO_BOCAL_HPP

# include "IAsteroid.hpp"
# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"

class AsteroBocal : public IAsteroid
{
	public:
		AsteroBocal();
		~AsteroBocal();
		AsteroBocal(const AsteroBocal &copy);
		AsteroBocal &operator=(const AsteroBocal &/*rvalue*/);
		std::string getName() const;

		std::string beMined(StripMiner */*stripMiner*/) const;
		std::string beMined(DeepCoreMiner */*deepCoreMiner*/) const;

		std::string beMined(const StripMiner */*stripMiner*/) const;
		std::string beMined(const DeepCoreMiner */*deepCoreMiner*/) const;
};

#endif
