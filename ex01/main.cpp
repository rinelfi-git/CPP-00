/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:08:24 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 11:24:55 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <string>

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
			phone.add_prompt();
		else if (cmd == "SEARCH")
			phone.print();
		else if (cmd == "EXIT")
			break ;
		cmd = "";
	}
	return (0);
}
