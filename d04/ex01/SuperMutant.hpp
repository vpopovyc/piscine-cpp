/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 17:11:44 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 17:47:19 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SUPERMUTANT_HPP
# define __SUPERMUTANT_HPP

# include "AEnemy.hpp"

# define DMG_BLCK_SM 3
# define HP_SM       170

class SuperMutant : public AEnemy {

private:

protected:

public:
    SuperMutant(void);
    ~SuperMutant(void);
    SuperMutant(const SuperMutant& copy);
    SuperMutant&    operator=(const SuperMutant& rvalue);
    void            take_damage(int damage);
};

#endif /* __SUPERMUTANT_HPP */