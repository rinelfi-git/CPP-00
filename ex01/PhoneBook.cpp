/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:05:44 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 20:11:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void): _length(0)
{
}

void	PhoneBook::_draw_table_line()
{

	std::cout << '+' << std::string(TRUNC_AT, '-')
		<< '+' << std::string(TRUNC_AT, '-')
		<< '+' << std::string(TRUNC_AT, '-')
		<< '+' << std::string(TRUNC_AT, '-') << '+' << std::endl;
}

void	PhoneBook::_print_formated(t_str str)
{
	if ((int) str.length() > TRUNC_AT)
		std::cout << std::setw(TRUNC_AT - 1) << str.substr(0, TRUNC_AT - 1) << '.' << '|';
	else
		std::cout << std::setw(TRUNC_AT) << str << '|';
}

void    PhoneBook::add(Contact contact)
{
	int	i;

	if (_length >= MAX_LEN)
	{
		i = 0;
		while (++i < MAX_LEN)
			_contacts[i - 1] = _contacts[i];
		_length = MAX_LEN - 1;
	}
    _contacts[_length++] = contact;
}

void    PhoneBook::print(void)
{
    int i;

	this->_draw_table_line();
	std::cout << '|' << std::setw(TRUNC_AT) << "Index" << '|'
		<< std::setw(TRUNC_AT) << "First name" << '|'
		<< std::setw(TRUNC_AT) << "Last name"  << '|'
		<< std::setw(TRUNC_AT) << "Nickname"  << '|'<< std::endl;
	this->_draw_table_line();
    i = 0;
    while (i < _length)
    {
		std::cout << '|' << std::setw(TRUNC_AT) << (i + 1) << '|';
		this->_print_formated(_contacts[i].firstname);
		this->_print_formated(_contacts[i].lastname);
		this->_print_formated(_contacts[i].nickname);
		i++;
		std::cout << std::endl;
		this->_draw_table_line();
	}
}

void    PhoneBook::add_prompt(void)
{
    Contact	contact;

	while (contact.firstname.empty() && !std::cin.fail())
		contact.prompt("First name", contact.firstname);
	while (contact.lastname.empty() && !std::cin.fail())
		contact.prompt("Last name", contact.lastname);
	while (contact.nickname.empty() && !std::cin.fail())
		contact.prompt("Nickname", contact.nickname);
	while (contact.phone_number.empty() && !std::cin.fail())
		contact.prompt("Phone number", contact.phone_number);
	while (contact.darkest_secret.empty() && !std::cin.fail())
		contact.prompt("Darkest secret", contact.darkest_secret);
	this->add(contact);
}

PhoneBook::~PhoneBook()
{
}
