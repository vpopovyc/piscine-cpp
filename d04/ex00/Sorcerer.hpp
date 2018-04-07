/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 14:55:01 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/22 22:05:34 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SORCERER_HPP
# define __SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer {

private:
    Sorcerer(void);
    std::string     _name;
    std::string     _title;
public:

    Sorcerer(const Sorcerer& copy);
    Sorcerer(std::string name, std::string title);
    ~Sorcerer(void);
    Sorcerer&       operator=(const Sorcerer& rvalue);
    void            set_name(std::string name);
    void            set_title(std::string title);
    std::string     get_name(void) const;
    std::string     get_title(void) const;
    void            polymorph(Victim const & input);
};
    std::ostream&   operator<<(std::ostream& stream, const Sorcerer& input);

#endif /* __SORCERER_HPP */
