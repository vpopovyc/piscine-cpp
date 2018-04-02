/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 12:52:41 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/10 12:52:42 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.class.hpp>

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

std::string Contact::filter(std::string &input) const
{
	std::string filtered_string;

	for (std::string::const_iterator ch = input.begin(); ch != input.end(); ++ch) {
		if (std::isalnum(*ch)) {
			filtered_string += *ch;
		}
	}
	return (filtered_string);
}

void Contact::read_from_stdin(std::string &input, const char *promt) const
{
	do {
		std::cout << std::setw(17) <<  std::left << promt;
		if (feof(stdin)) {
			std::cout << std::left << "Found EOF symbol: exiting" << std::endl;
			exit(-1);
		}
		std::getline(std::cin, input);
		input = filter(input);
	}
	while (input.empty());
}

void Contact::set_first_name(void) {
	
	std::string 	input;

	read_from_stdin(input, "Fisrt name: ");
	_first_name = input;
}

void Contact::set_last_name(void) {

	std::string 	input;

	read_from_stdin(input, "Last name: ");
	_last_name = input;
}

void Contact::set_nickname(void) {
	
	std::string 	input;

	read_from_stdin(input, "Nickname: ");
	_nickname = input;
}

void Contact::set_login(void) {
	
	std::string 	input;

	read_from_stdin(input, "Login: ");
	_login = input;
}

void Contact::set_postal_address(void) {
	
	std::string 	input;

	read_from_stdin(input, "Postal Address: ");
	_postal_address = input;
}
	
void Contact::set_email(void) {

	std::string 	input;

	read_from_stdin(input, "Email: ");
	_email = input;
}

void Contact::set_phone_number(void) {

	std::string 	input;

	read_from_stdin(input, "Phone number: ");
	_phone_number = input;
}

void Contact::set_birthday_date(void) {

	std::string 	input;

	read_from_stdin(input, "Birthday date: ");
	_birthday_date = input;
}

void Contact::set_favorite_meal(void) {

	std::string 	input;

	read_from_stdin(input, "Favorite meal: ");
	_favorite_meal = input;
}

void Contact::set_underwear_color(void) {

	std::string 	input;

	read_from_stdin(input, "Underwear color: ");
	_underwear_color = input;
}

void Contact::set_darkest_secret(void) {

	std::string 	input;

	read_from_stdin(input, "Darkest secret: ");
	_darkest_secret = input;
}

void Contact::create_contact(void) {

	set_first_name();
	set_last_name();
	set_nickname();
	set_login();
	set_postal_address();
	set_email();
	set_phone_number();
	set_birthday_date();
	set_favorite_meal();
	set_underwear_color();
	set_darkest_secret();
	std::cout << CLEAR_SCR;
}

std::string Contact::get_first_name(void) {
	
	return (_first_name);
}

std::string Contact::get_last_name(void) {

	return (_last_name);
}

std::string Contact::get_nickname(void) {
	
	return (_nickname);
}

std::string Contact::get_login(void) {

	return (_login);
}

std::string Contact::get_postal_address(void) {
	
	return (_postal_address);
}
	
std::string Contact::get_email(void) {

	return (_email);
}

std::string Contact::get_phone_number(void) {

	return (_phone_number);
}

std::string Contact::get_birthday_date(void) {

	return (_birthday_date);
}

std::string Contact::get_favorite_meal(void) {

	return (_favorite_meal);
}

std::string Contact::get_underwear_color(void) {

	return (_underwear_color);
}

std::string Contact::get_darkest_secret(void) {

	return (_darkest_secret);
}

void	Contact::print_contact(void) {

	std::cout << std::setw(17) <<  std::left << "Fisrt name: " << std::setw(1) << get_first_name() << std::endl;
	std::cout << std::setw(17) <<  std::left << "Last name: " << std::setw(1) << get_last_name() << std::endl;
	std::cout << std::setw(17) <<  std::left << "Nickname: " << std::setw(1) << get_nickname() << std::endl;
	std::cout << std::setw(17) <<  std::left << "Login: " << std::setw(1) << get_login() << std::endl;
    std::cout << std::setw(17) <<  std::left << "Postal Address: " << std::setw(1) << get_postal_address() << std::endl;
    std::cout << std::setw(17) <<  std::left << "Email: " << std::setw(1) << get_email() << std::endl;
    std::cout << std::setw(17) <<  std::left << "Phone number: " << std::setw(1) << get_phone_number() << std::endl;
    std::cout << std::setw(17) <<  std::left << "Birthday date: " << std::setw(1) << get_birthday_date() << std::endl;
    std::cout << std::setw(17) <<  std::left << "Favorite meal: " << std::setw(1) << get_favorite_meal() << std::endl;
    std::cout << std::setw(17) <<  std::left << "Underwear color: " << std::setw(1) << get_underwear_color() << std::endl;
    std::cout << std::setw(17) <<  std::left << "Darkest secret: " << std::setw(1) << get_darkest_secret() << std::endl;
}