/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:13:13 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/12 16:13:14 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONE_CLASS_HPP
# define __PHONE_CLASS_HPP

# include <Contact.class.hpp>
# include <iostream>
# include <iomanip>

# define CAPACITY 		8
# define FIRST_LAUNCH	-1

class Phone {

private:

	Contact		_cn[CAPACITY];
	int			_current_cn;
	void		_print_grid(void);
	void		_print_basic_info(Contact& cn, int i);
	void		_validate_print_string(std::string string);
	int 		_readIndex(void) const;

public:

	Phone(void);
	~Phone(void);
	void 		add_contact(void);
	void		search_contact(void);
	void		myexit(std::string msg);
};

#endif
