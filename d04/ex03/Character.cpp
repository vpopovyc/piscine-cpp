/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 16:29:06 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 21:52:35 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("") { _new_materia_pool(_materia_pool); }

Character::~Character(void)
{
    _name.clear();
    _delete_materia_pool(_materia_pool);
}

Character::Character(const std::string name)
{
    _name = name;
    _new_materia_pool(_materia_pool);
}

Character::Character(const Character& copy)
{
    _name = copy.get_name();
    _delete_materia_pool(_materia_pool);
    _new_materia_pool(_materia_pool);
    _copy_materia_pool(_materia_pool, copy._materia_pool);
}

Character              &Character::operator=(const Character& rvalue)
{
    _name = rvalue.get_name();
    _delete_materia_pool(_materia_pool);
    _new_materia_pool(_materia_pool);
    _copy_materia_pool(_materia_pool, rvalue._materia_pool);
    return (*this);
}

void                    Character::equip(AMateria* inst)
{
    for (unsigned int i = 0; i < MAT_POOL_CAP; ++i)
    {
        if (_materia_pool[i] == NULL) {
            _materia_pool[i] = inst;
            break ;
        }
    }
}

void                    Character::unequip(int idx)
{
    if (idx >= 0 && idx < MAT_POOL_CAP)
    {
        if (_materia_pool[idx] != NULL) 
        {
            _materia_pool[idx] = NULL;
            _swap_last(_materia_pool, idx);
        }
    }
}

std::string const &     Character::get_name(void) const { return (this->_name); }

void                    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < MAT_POOL_CAP)
    {
        if (_materia_pool[idx] != NULL)
            _materia_pool[idx]->use(target);
    }
}

void                    Character::_swap_last(AMateria **&_materia_pool, int idx)
{
    AMateria    *p_mat = NULL;

    for (unsigned int i = idx + 1; i < MAT_POOL_CAP; ++i)
    {
        if (_materia_pool[i] == NULL)
        {
            --i;
            p_mat = _materia_pool[i];
            _materia_pool[i] = _materia_pool[idx];
            _materia_pool[idx] = p_mat;
            break ;
        }
    }
}

void                    Character::_new_materia_pool(AMateria **&_materia_pool)
{
    _materia_pool = new AMateria*[MAT_POOL_CAP];
    
    for (unsigned int i = 0; i < MAT_POOL_CAP; ++i)
        _materia_pool[i] = NULL;
}

void                    Character::_delete_materia_pool(AMateria **&_materia_pool)
{
    delete [] _materia_pool;
}

void                    Character::_copy_materia_pool(AMateria **&materia_pool, AMateria **const&reference)
{
    for (unsigned int i = 0; i < MAT_POOL_CAP; ++i)
        materia_pool[i] = reference[i];
}