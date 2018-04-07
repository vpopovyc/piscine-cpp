/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:16:28 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 19:59:52 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIA_HPP
# define __IMATERIA_HPP

# include <string>
# include "AMateria.hpp"

class IMateriaSource {

public:

    virtual ~IMateriaSource() {};
    virtual void        learn_materia(AMateria * inst) = 0;
    virtual AMateria*   create_materia(std::string const & type) = 0;
};

#endif /* __IMATERIA_HPP */