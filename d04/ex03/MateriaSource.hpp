/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:22:55 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 21:55:50 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP
# define __MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:

    int                _n_materia;
    AMateria           **_learned_materia;
    void               _delete_materia(AMateria **&learned_materia);
    void               _copy_materia(AMateria **&learned_materia, AMateria **const&reference, const int n_materia);
    void               _new_materia(AMateria **&learned_materia, const int n_materia);
public:

    MateriaSource(void);
    ~MateriaSource(void);
    MateriaSource(const MateriaSource& copy);
    MateriaSource&      operator=(const MateriaSource& rvalue);
    void                learn_materia(AMateria * inst);
    AMateria*           create_materia(std::string const & type);
};

#endif /* __MATERIASOURCE_HPP */