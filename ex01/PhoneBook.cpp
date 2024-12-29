/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:05:44 by erijania          #+#    #+#             */
/*   Updated: 2024/12/29 10:33:03 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(void): _length(0)
{
}

bool	isNumber(std::string str)
{
	int	i;
	int	length;

	i = 0;
	length = str.length();
	while (i < length)
		if (!isdigit(str.at(i++)))
			break ;
	return (i == length);
}

void    PhoneBook::add(Contact contact)
{
	int	i;

	if (_length >= MAX_CONTACT_RECORD)
	{
		i = 0;
		while (++i < MAX_CONTACT_RECORD)
			_contacts[i - 1] = _contacts[i];
		_length = MAX_CONTACT_RECORD - 1;
	}
    _contacts[_length++] = contact;
}

void    PhoneBook::searchPrompt(void)
{
    int 		i;
	int			index;
	std::string	indexIn;

	index = -2;
	while (index == -2 && !std::cin.fail())
	{
		std::cout << "Type index bellow '" << _length << "' : ";
		std::getline(std::cin, indexIn);
		index = -2;
		if (indexIn.empty())
			index = -1;
		if (index == -2 && isNumber(indexIn))
			index = std::atoi(indexIn.c_str());
		if (index < -1 || index >= _length)
			index = -2;
	}
	if (index == -1)
	{
		std::cout << '|' << std::setw(TRUNC_AT) << "Index" << '|'
			<< std::setw(TRUNC_AT) << "First name" << '|'
			<< std::setw(TRUNC_AT) << "Last name"  << '|'
			<< std::setw(TRUNC_AT) << "Nickname"  << '|'<< std::endl;
		 i = -1;
		while (++i < _length)
			_contacts[i].printTableRow(i);
	}
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
	this->add(contact);
}

PhoneBook::~PhoneBook()
{
}
