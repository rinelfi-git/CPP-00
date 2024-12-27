/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:08:24 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 11:20:07 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <string>

void	add_cmd(PhoneBook &phonebook)
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
	phonebook.add(contact);
}

int	main(void)
{
	PhoneBook	phone;
	t_str		cmd("");

	while (!std::cin.fail())
	{
		std::cout << "Command info" << std::endl;
		std::cout << "\tADD : Save new contact" << std::endl;
		std::cout << "\tSEARCH : show contact list or contact info from id" << std::endl;
		std::cout << "\tEXIT : quit the program" << std::endl;
		std::cout << " > " << std::ends;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			add_cmd(phone);
		else if (cmd == "SEARCH")
			phone.print();
		else if (cmd == "EXIT")
			break ;
		cmd = "";
	}
	return (0);
}
