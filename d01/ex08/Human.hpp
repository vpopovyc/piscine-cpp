/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 15:08:54 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 15:08:55 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_HPP
# define __HUMAN_HPP

# include <string>
# include <iostream> 

# define NUM 3

# define CALL_ACTION(obj, func)  ((obj)->*(func))


class Human {

private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);

public:
	void action(std::string const & action_name, std::string const & target);

};

typedef void(Human::*Actions)(std::string const & target);

#endif 
