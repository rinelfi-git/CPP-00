/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:08:24 by erijania          #+#    #+#             */
/*   Updated: 2024/12/28 08:27:18 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phone;
	std::string cmd("");

	while (!std::cin.fail())
	{
		std::cout << "Command info" << std::endl;
		std::cout << "\tADD : enregistrer un nouveau contact" << std::endl;
		std::cout << "\tSEARCH : affiche le contact demandé" << std::endl;
		std::cout << "\tEXIT : quitter le programme" << std::endl;
		std::cout << "> " << std::ends;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phone.addPrompt();
		else if (cmd == "SEARCH")
			phone.searchPrompt();
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}
