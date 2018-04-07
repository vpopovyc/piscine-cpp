/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 14:16:35 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 15:11:48 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AWEAPON_HPP
# define __AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon {

private:

    std::string     _name;
    int             _damage;
    int             _action_points;
protected:

    AWeapon(void);
public:

    virtual ~AWeapon(void);
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(const AWeapon& copy);
    AWeapon&        operator=(const AWeapon& rvalue);
    std::string     get_name(void) const;
    int             get_damage(void) const;
    int             get_action_points(void) const;
    void            set_name(std::string input);
    void            set_damage(int input);
    void            set_action_points(int input);
    virtual void    attack(void) const;
};

    std::ostream&   operator<<(std::ostream& stream, const AWeapon& input);
#endif /* __AWEAPON_HPP */