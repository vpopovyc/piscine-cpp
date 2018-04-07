/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 20:55:22 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/22 22:42:09 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PEON_HPP
# define __PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {

private:

protected:
    Peon(void);

public:

    Peon(const Peon& copy);
    Peon(std::string name);
    ~Peon(void);
    Peon&           operator=(const Peon& rvalue);
    void            get_polymorphed(void) const;
};

#endif /* __PEON_HPP */