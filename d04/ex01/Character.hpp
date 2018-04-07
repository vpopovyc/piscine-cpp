/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 18:30:16 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/23 19:38:23 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP
# define __CHARACTER_HPP 

# include "AWeapon.hpp"
# include "AEnemy.hpp"

# define AP_REST    10
# define AP_MAX     40

class Character {

private:

    int             _ap_amount;
    AWeapon*        _p_weapon;
    std::string     _name;
protected:

    Character(void);
public:

    Character(std::string const& name);
    ~Character(void);
    Character(const Character& copy);
    Character&      operator=(const Character& rvalue);
    int             get_ap_amount(void) const;
    AWeapon*        get_p_weapon(void) const;
    std::string     get_name(void) const;
    void            set_ap_amount(int input);
    void            set_p_weapon(AWeapon* input);
    void            set_name(std::string input);
    void            recover_ap(void);
    void            equip(AWeapon* arms);
    void            attack(AEnemy* zork);
};

    std::ostream&       operator<<(std::ostream& stream, const Character& input);
#endif /* __CHARACTER_HPP */