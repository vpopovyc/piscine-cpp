/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 16:28:55 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 22:03:18 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP
# define __CHARACTER_HPP

# include "AMateria.hpp"
# define MAT_POOL_CAP  4

class Character : public ICharacter {

private:

    std::string             _name;
    AMateria                **_materia_pool;
    void                    _swap_last(AMateria **&_materia_pool, int idx);
    void                    _new_materia_pool(AMateria **&_materia_pool);
    void                    _delete_materia_pool(AMateria **&_materia_pool);
    void                    _copy_materia_pool(AMateria **&materia_pool, AMateria **const&reference);

public:

    Character(void);
    ~Character(void);
    Character(const Character & copy);
    Character(const std::string name);
    Character&              operator=(const Character& rvalue);
    void                    equip(AMateria* inst);
    void                    unequip(int idx);
    std::string const &     get_name(void) const;
    void                    use(int idx, ICharacter& target);
};

#endif /* __CHARACTER_HPP */