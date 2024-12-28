/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:05:44 by erijania          #+#    #+#             */
/*   Updated: 2024/12/28 08:15:23 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void): _length(0)
{
}

void	PhoneBook::_drawTableLine()
{

	std::cout << '+' << std::string(TRUNC_AT, '-')
		<< '+' << std::string(TRUNC_AT, '-')
		<< '+' << std::string(TRUNC_AT, '-')
		<< '+' << std::string(TRUNC_AT, '-') << '+' << std::endl;
}

void	PhoneBook::_printFormated(std::string str)
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

	this->_drawTableLine();
	std::cout << '|' << std::setw(TRUNC_AT) << "Index" << '|'
		<< std::setw(TRUNC_AT) << "First name" << '|'
		<< std::setw(TRUNC_AT) << "Last name"  << '|'
		<< std::setw(TRUNC_AT) << "Nickname"  << '|'<< std::endl;
	this->_drawTableLine();
    i = 0;
    while (i < _length)
    {
		std::cout << '|' << std::setw(TRUNC_AT) << (i + 1) << '|';
		this->_printFormated(_contacts[i].firstname);
		this->_printFormated(_contacts[i].lastname);
		this->_printFormated(_contacts[i].nickname);
		i++;
		std::cout << std::endl;
		this->_drawTableLine();
	}
}

void    PhoneBook::addPrompt(void)
{
    Contact	contact;

	while (contact.firstname.empty() && !std::cin.fail())
		contact.prompt("First name", contact.firstname);
	while (contact.lastname.empty() && !std::cin.fail())
		contact.prompt("Last name", contact.lastname);
	while (contact.nickname.empty() && !std::cin.fail())
		contact.prompt("Nickname", contact.nickname);
	while (contact.phoneNumber.empty() && !std::cin.fail())
		contact.prompt("Phone number", contact.phoneNumber);
	while (contact.darkestSecret.empty() && !std::cin.fail())
		contact.prompt("Darkest secret", contact.darkestSecret);
	this->add(contact);
}

PhoneBook::~PhoneBook()
{
}
