/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 16:25:17 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 22:25:14 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP
# define __ICHARACTER_HPP


class AMateria;

class ICharacter {

public:
    virtual ~ICharacter() {}
    virtual std::string const &     get_name() const = 0;
    virtual void                    equip(AMateria *inst) = 0;
    virtual void                    unequip(int idx) = 0;
    virtual void                    use(int idx, ICharacter& target) = 0;
};

#endif /* __ICHARACTER_HPP */