/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEnemy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 16:17:50 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 17:21:43 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AENEMY_HPP
# define __AENEMY_HPP

# include <string>
# include <iostream>

class AEnemy {

private:

    int             _hit_points;
    std::string     _type;
protected:

    AEnemy(void);
public:

    AEnemy(const AEnemy& copy);
    AEnemy(int hp, std::string const& type);
    virtual ~AEnemy(void);
    AEnemy&         operator=(const AEnemy& rvalue);
    void            set_hit_points(int input);
    void            set_type(std::string input);
    int             get_hit_points(void) const;
    std::string     get_type(void) const;
    virtual void    take_damage(int damage);
};

    std::ostream&   operator<<(std::ostream& stream, const AEnemy& input);

#endif /* __AENEMY_HPP */