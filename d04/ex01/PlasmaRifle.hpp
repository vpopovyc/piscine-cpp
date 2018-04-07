/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 15:14:09 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 17:05:32 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PLASMARIFLE_HPP
# define __PLASMARIFLE_HPP

# include "AWeapon.hpp"

# define DMG_PR 21
# define APC_PR 5

class PlasmaRifle : public AWeapon {

private:

protected:

public:

    PlasmaRifle(void);
    ~PlasmaRifle(void);
    PlasmaRifle(const PlasmaRifle& copy);
    PlasmaRifle&        operator=(const PlasmaRifle& rvalue);
    void                attack(void) const;
};

#endif /* __PLASMARIFLE_HPP */