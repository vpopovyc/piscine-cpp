/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 20:22:24 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/22 22:42:00 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VICTIM_HPP
# define __VICTIM_HPP

# include <string>
# include <iostream>

class Victim {

private:

    std::string     _name;
protected:
    
    Victim(void);
public:

    Victim(const Victim& copy);
    Victim(std::string name);
    ~Victim(void);
    Victim&                 operator=(const Victim& rvalue);
    void                    set_name(std::string name);
    std::string             get_name(void) const;
    virtual void            get_polymorphed(void) const;
};
    std::ostream&   operator<<(std::ostream& stream, const Victim& input);

#endif /* __VICTIM_HPP */