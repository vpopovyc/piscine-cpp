/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:20:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2018/04/07 22:22:20 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BOCAL_STEROID_HPP
# define __BOCAL_STEROID_HPP

# include "IAsteroid.hpp"
# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"

class BocalSteroid : public IAsteroid
{
	public:
		BocalSteroid();
		~BocalSteroid();
		BocalSteroid(const BocalSteroid &copy);
		BocalSteroid &operator=(const BocalSteroid &/*rvalue*/);
		std::string getName() const;

		std::string beMined(StripMiner */*stripMiner*/) const;
		std::string beMined(DeepCoreMiner */*deepCoreMiner*/) const;

		std::string beMined(const StripMiner */*stripMiner*/) const;
		std::string beMined(const DeepCoreMiner */*deepCoreMiner*/) const;
};

#endif
