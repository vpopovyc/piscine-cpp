/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:22:39 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 21:25:26 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _n_materia(0), _learned_materia(new AMateria*[_n_materia])
{
}

MateriaSource::~MateriaSource(void)
{
    _n_materia = 0;
    _delete_materia(_learned_materia);
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    _delete_materia(_learned_materia);
    _new_materia(_learned_materia, copy._n_materia);
    _copy_materia(_learned_materia, copy._learned_materia, copy._n_materia);
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& rvalue)
{
    _delete_materia(_learned_materia);
    _new_materia(_learned_materia, rvalue._n_materia);
    _copy_materia(_learned_materia, rvalue._learned_materia, rvalue._n_materia);
    return (*this);
}

void            MateriaSource::learn_materia(AMateria *inst)
{
    AMateria            **new_arr;

    if (_n_materia + 1 > 4)
        return ;
    _new_materia(new_arr, _n_materia + 1);
    _copy_materia(new_arr, _learned_materia, _n_materia);
    _delete_materia(_learned_materia);
    new_arr[_n_materia] = inst;
    _n_materia += 1;
    _new_materia(_learned_materia, _n_materia);
    _copy_materia(_learned_materia, new_arr, _n_materia);
    delete new_arr;
}

AMateria*       MateriaSource::create_materia(std::string const & type)
{
    std::string     s_search;
    unsigned int    size = _n_materia;

    for (unsigned int i = 0; i < size; ++i)
    {
        s_search = _learned_materia[i]->get_type();
        if (s_search.compare(type) == 0)
            return (_learned_materia[i]->clone());
    }
    return (NULL);
}

void            MateriaSource::_delete_materia(AMateria **&learned_materia)
{
    delete [] learned_materia;
}

void            MateriaSource::_copy_materia(AMateria **&learned_materia, AMateria **const&reference, const int n_materia)
{
    for (int i = 0; i < n_materia; ++i)
        learned_materia[i] = reference[i];
}

void            MateriaSource::_new_materia(AMateria **&learned_materia, const int n_materia)
{
    learned_materia = new AMateria*[n_materia];

    for (int i = 0; i < n_materia; ++i)
        learned_materia[i] = NULL;
}