/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:05:44 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 10:16:50 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _length(0)
{
    std::cout << "length is " << _length << std::endl;
}

void    PhoneBook::add(std::string contact)
{
    _contacts[_length++] = contact;
}

void    PhoneBook::print(void)
{
    int i;

    i = 0;
    while (i < _length)
        std::cout << _contacts[i++] << std::endl;
}

PhoneBook::~PhoneBook()
{
}
