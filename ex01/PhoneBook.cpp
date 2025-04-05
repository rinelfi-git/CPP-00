/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:05:44 by erijania          #+#    #+#             */
/*   Updated: 2025/04/05 10:55:33 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.h"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(void): _length(0)
{
}

void    PhoneBook::add(Contact contact)
{
	if (_length >= MAX_CONTACT_RECORD)
	{
		_contacts[0] = contact;
	} else
    	_contacts[_length++] = contact;
}

void    PhoneBook::searchPrompt(void)
{
    int 		i;
	int			index;
	std::string	indexIn;

	if (_length == 0) {
		std::cout << "Contact is empty" << std::endl;
		return;
	}
	index = -2;
	std::cout << '|' << std::setw(TRUNC_AT) << "Index" << '|'
		<< std::setw(TRUNC_AT) << "First name" << '|'
		<< std::setw(TRUNC_AT) << "Last name"  << '|'
		<< std::setw(TRUNC_AT) << "Nickname"  << '|'<< std::endl;
		i = -1;
	while (++i < _length)
		_contacts[i].printTableRow(i);
	while (index == -2 && !std::cin.fail())
	{
		std::cout << "Type index bellow '" << _length << "' : ";
		std::getline(std::cin, indexIn);
		index = -2;
		if (indexIn.empty())
			index = -1;
		if (index == -2 && isNumber(indexIn))
			index = std::atoi(indexIn.c_str());
		if (index < 0 || index >= _length)
			index = -2;
		else
			_contacts[index].printInfo();
	}
}

void    PhoneBook::addPrompt(void)
{
    Contact	contact;

	contact.promptFirstname();
	contact.promptLastname();
	contact.promptNickname();
	contact.promptPhoneNumber();
	contact.promptDarkestSecret();
	this->add(contact);
}

PhoneBook::~PhoneBook()
{
}
