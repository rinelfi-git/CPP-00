/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:23:10 by erijania          #+#    #+#             */
/*   Updated: 2024/12/28 08:54:27 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

void    Contact::prompt(std::string msg, std::string &in)
{
    std::cout << msg << " : " << std::ends;
    std::getline(std::cin, in);
}

void	Contact::print(void)
{
	std::cout << "First name : " << this->firstname << std::endl;
	std::cout << "Last name : " << this->lastname << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone number : " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->darkestSecret << std::endl;
}
