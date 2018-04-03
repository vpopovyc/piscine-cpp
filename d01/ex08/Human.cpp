/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 15:08:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 15:08:49 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {

	std::cout << "punch " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target) {

	std::cout << "pew pew pew " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target) {

	std::cout << "meow meow " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target) {

    Actions             action[NUM] = { &Human::meleeAttack, 
                                        &Human::rangedAttack, 
                                        &Human::intimidatingShout };

    std::string const   avaible_actions[NUM] = { "punch",
                                                 "shot",
                                                 "roar" };

    for (unsigned i = 0; i < NUM; ++i) {

        if (avaible_actions[i].compare(action_name) == 0) {

            CALL_ACTION(this, action[i]) (target);
        }
    }
}
