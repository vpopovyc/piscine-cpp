/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 12:52:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/10 12:52:55 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_CLASS_HPP
# define __CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define CLEAR_SCR 		"\x1B[2J\x1B[H"

class Contact {

private:
	std::string		_first_name;
	std::string 	_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;

protected:
	void			read_from_stdin(std::string &input, const char *promt) const;
	std::string 	filter(std::string &input) const;

public:
	Contact(void);
	~Contact(void);
	void			create_contact(void);
	void			print_contact(void);
// Setters
	void			set_first_name(void);
	void			set_last_name(void);
	void			set_nickname(void);
	void			set_login(void);
	void			set_postal_address(void);
	void			set_email(void);
	void			set_phone_number(void);
	void			set_birthday_date(void);
	void			set_favorite_meal(void);
	void			set_underwear_color(void);
	void			set_darkest_secret(void);
// Getters
	std::string		get_first_name(void);
	std::string		get_last_name(void);
	std::string		get_nickname(void);
	std::string		get_login(void);
	std::string		get_postal_address(void);
	std::string		get_email(void);
	std::string		get_phone_number(void);
	std::string		get_birthday_date(void);
	std::string		get_favorite_meal(void);
	std::string		get_underwear_color(void);
	std::string		get_darkest_secret(void);
};

#endif
