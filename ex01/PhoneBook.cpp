/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:05:44 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 11:24:10 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _length(0)
{
    std::cout << "length is " << _length << std::endl;
}

void    PhoneBook::add(Contact contact)
{
    _contacts[_length++] = contact;
}

void    PhoneBook::print(void)
{
    int i;

    i = 0;
    while (i < _length)
        std::cout << _contacts[i++].firstname << std::endl;
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
