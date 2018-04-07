/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 14:45:26 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 22:21:18 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP
# define __AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"


class AMateria {

private:

    std::string     _type;
    unsigned int    _xp;
public:

    // Copliens form
    AMateria(void);
    virtual ~AMateria(void);
    AMateria(const AMateria& copy);
    AMateria&  operator=(const AMateria& rvalue);
    AMateria(std::string const & type);
    // Getters
    std::string const &     get_type(void) const;
    unsigned int            get_xp(void) const;
    // Setters
    void                    set_type(const std::string & type);
    void                    set_xp(unsigned int xp);
    // Specific members
    void                    eval_materia(void);
    virtual AMateria*       clone(void) const = 0;
    virtual void            use(ICharacter & target);
};
#endif /* __AMATERIA_HPP */