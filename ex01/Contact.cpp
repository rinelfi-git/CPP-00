/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:23:10 by erijania          #+#    #+#             */
/*   Updated: 2025/04/05 13:31:25 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.h"
#include <iomanip>

Contact	*Contact::setFirstname(std::string firstname)
{
	this->_fname = firstname;
	return (this);
}

std::string	Contact::getFirstname(void) const
{
	return (this->_fname);
}

Contact	*Contact::setLastname(std::string lastname)
{
	this->_lname = lastname;
	return (this);
}

std::string	Contact::getLastname(void) const
{
	return (this->_lname);
}

Contact	*Contact::setNickname(std::string nickname)
{
	this->_nname = nickname;
	return (this);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nname);
}

Contact	*Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phone = phoneNumber;
	return (this);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phone);
}

Contact	*Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_secret = darkestSecret;
	return (this);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_secret);
}

void	Contact::_sayHi(void) {
	std::cout << "Arigato gozaimasu" << std::endl;
}

void	Contact::promptFirstname(void)
{
	std::string	promptStr("");

	while ((promptStr.empty() || promptStr == " ") && !std::cin.fail())
	{
		std::cout << "First name : " << std::ends;
    	std::getline(std::cin, promptStr);
		str_replace(promptStr, "  ", " ");
		str_replace(promptStr, "\t", " ");
	}
	if (!promptStr.empty())
		this->setFirstname(promptStr);
	this->_sayHi();
}
void	Contact::promptLastname(void)
{
	std::string	promptStr("");

	while ((promptStr.empty() || promptStr == " ") && !std::cin.fail())
	{
		std::cout << "Last name : " << std::ends;
    	std::getline(std::cin, promptStr);
		str_replace(promptStr, "\t", " ");
		str_replace(promptStr, "  ", " ");
	}
	if (!promptStr.empty())
		this->setLastname(promptStr);
}
void	Contact::promptNickname(void)
{
	std::string	promptStr("");

	while ((promptStr.empty() || promptStr == " ") && !std::cin.fail())
	{
		std::cout << "Nick name : " << std::ends;
    	std::getline(std::cin, promptStr);
		str_replace(promptStr, "\t", " ");
		str_replace(promptStr, "  ", " ");
	}
	if (!promptStr.empty())
		this->setNickname(promptStr);
}

void	Contact::promptPhoneNumber(void)
{
	std::string	promptStr("");

	while ((promptStr.empty() || !is_number(promptStr)) && !std::cin.fail())
	{
		std::cout << "Phone number : " << std::ends;
    	std::getline(std::cin, promptStr);
		str_replace(promptStr, " ", "");
		str_replace(promptStr, "\t", "");
		if (!promptStr.empty() || is_number(promptStr))
			this->setPhoneNumber(promptStr);
	}
}
void	Contact::promptDarkestSecret(void)
{
	std::string	promptStr("");

	while ((promptStr.empty() || promptStr == " ") && !std::cin.fail())
	{
		std::cout << "Darkest secret : " << std::ends;
    	std::getline(std::cin, promptStr);
		str_replace(promptStr, "\t", " ");
		str_replace(promptStr, "  ", " ");
	}
	if (!promptStr.empty())
		this->setDarkestSecret(promptStr);
}

void	Contact::printInfo(void)
{
	std::cout << "First name : " << _fname << std::endl;
	std::cout << "Last name : " << _lname << std::endl;
	std::cout << "Nickname : " << _nname << std::endl;
	std::cout << "Phone number : " << _phone << std::endl;
	std::cout << "Darkest secret : " << _secret << std::endl;
}

void	Contact::printTableRow(int index)
{
	std::cout << '|' << std::setw(TRUNC_AT) << index << '|';
	if (_fname.length() > TRUNC_AT)
		std::cout << std::setw(TRUNC_AT - 1) << _fname.substr(0, TRUNC_AT - 1) << ".|";
	else
		std::cout << std::setw(TRUNC_AT) << _fname << "|";
	if (_lname.length() > TRUNC_AT)
		std::cout << std::setw(TRUNC_AT - 1) << _lname.substr(0, TRUNC_AT - 1) << ".|";
	else
		std::cout << std::setw(TRUNC_AT) << _lname << "|";
	if (_nname.length() > TRUNC_AT)
		std::cout << std::setw(TRUNC_AT - 1) << _nname.substr(0, TRUNC_AT - 1) << ".|";
	else
		std::cout << std::setw(TRUNC_AT) << _nname << "|";
	std::cout << std::endl;
}
