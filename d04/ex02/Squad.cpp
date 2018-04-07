/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:14:25 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/26 13:29:19 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) {

    _marines_army = NULL;
    _number_of_marines = 0;
}

Squad::~Squad(void) {
    

    this->_delete_army(this->_marines_army, this->_number_of_marines);
    _marines_army = NULL;
    _number_of_marines = 0;
}

Squad::Squad(const Squad& copy) {

    this->_delete_army(this->_marines_army, this->_number_of_marines);
    this->_new_army(copy._marines_army, copy._number_of_marines);
    this->_number_of_marines = copy._number_of_marines;
}

Squad&              Squad::operator=(const Squad& rvalue) {

    this->_delete_army(this->_marines_army, this->_number_of_marines);
    this->_new_army(rvalue._marines_army, rvalue._number_of_marines);
    this->_number_of_marines = rvalue._number_of_marines;
    return (*this);
}

int                 Squad::get_count(void) const {

    return (_number_of_marines);
}

ISpaceMarine*       Squad::get_unit(int index) const {

    return (_marines_army[index]);
}

int                 Squad::push(ISpaceMarine *troop){

    if (troop != NULL) {

        _new_army(_marines_army, _number_of_marines);
        _marines_army[_number_of_marines] = troop;
        _number_of_marines += 1;
    }
    return (_number_of_marines);
}

void                Squad::_new_army(ISpaceMarine  **const&old_marines_army, int number_of_marines) {

     ISpaceMarine    **new_marines_army;

     new_marines_army = new ISpaceMarine*[number_of_marines + 1];
     _copy_army(new_marines_army, old_marines_army, number_of_marines);
     delete _marines_army;
     _marines_army = new_marines_army;
}

void                Squad::_copy_army(ISpaceMarine  **&new_marines_army, ISpaceMarine  **const&old_marines_army, int number_of_marines) const {

    if (new_marines_army != NULL) {

        for (int i = 0; i < number_of_marines; ++i) {

            new_marines_army[i] = old_marines_army[i];
        }
    }
}

void                Squad::_delete_army(ISpaceMarine  **&marines_army, int number_of_marines) {

    if (marines_army != NULL) {

        for (int i = 0; i < number_of_marines; ++i) {

            delete marines_army[i];
        }
        delete marines_army;
    }
}
