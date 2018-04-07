/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 15:32:08 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 18:55:44 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POWERFIST_HPP
# define __POWERFIST_HPP

# include "AWeapon.hpp"

# define DMG_PF 50
# define APC_PF 8

class PowerFist : public AWeapon {

private:

protected:

public:

    PowerFist(void);
    ~PowerFist(void);
    PowerFist(const PowerFist& copy);
    PowerFist&          operator=(const PowerFist& rvalue);
    void                attack(void) const;
};

#endif /* __POWERFIST_HPP */