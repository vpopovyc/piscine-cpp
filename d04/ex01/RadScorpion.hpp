/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 17:50:38 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 17:57:01 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RADSCORPION_HPP
# define __RADSCORPION_HPP

# include "AEnemy.hpp"

# define HP_RC 80

class RadScorpion : public AEnemy {

private:

protected:

public:
    RadScorpion(void);
    ~RadScorpion(void);
    RadScorpion(const RadScorpion& copy);
    RadScorpion&    operator=(const RadScorpion& rvalue);
    void            take_damage(int damage);
};

#endif /* __RADSCORPION_HPP */