/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:05:44 by erijania          #+#    #+#             */
/*   Updated: 2025/04/27 10:06:58 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.h"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(void): _length(0)
{
}

void    PhoneBook::_add(Contact contact)
{
    _contacts[_length % MAX_CONTACT_RECORD] = contact;
	_length++;
}

void    PhoneBook::searchPrompt(void)
{
    int 		i;
	int			index;
	std::string	indexIn;
	int			actual_length;

	if (_length == 0) {
		std::cout << "Contact is empty" << std::endl;
		return;
	}
	actual_length = std::min(_length, MAX_CONTACT_RECORD);
	index = -2;
	std::cout << '|' << std::setw(TRUNC_AT) << "Index" << '|'
		<< std::setw(TRUNC_AT) << "First name" << '|'
		<< std::setw(TRUNC_AT) << "Last name"  << '|'
		<< std::setw(TRUNC_AT) << "Nickname"  << '|'<< std::endl;
		i = -1;
	while (++i < actual_length)
		_contacts[i].printTableRow(i);
	std::cout << "Search index between [0 ; "<< actual_length << "[ : " << std::ends;
	std::getline(std::cin, indexIn);
	index = -2;
	if (indexIn.empty())
		index = -1;
	if (index == -2 && is_number(indexIn))
		index = std::atoi(indexIn.c_str());
	if (index < 0 || index >= actual_length)
		std::cout << "Bad argument, nothing to do..." << std::endl;
	else
		_contacts[index].printInfo();
}

void    PhoneBook::addPrompt(void)
{
    Contact	contact;

	contact.promptFirstname();
	contact.promptLastname();
	contact.promptNickname();
	contact.promptPhoneNumber();
	contact.promptDarkestSecret();
	_add(contact);
}

PhoneBook::~PhoneBook()
{
}
