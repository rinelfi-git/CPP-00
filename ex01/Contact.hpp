/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:19:06 by erijania          #+#    #+#             */
/*   Updated: 2024/12/29 10:33:12 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
# define __CONTACT_H__
# include <iostream>
# include "phonebook.h"

class Contact
{
	private:
		std::string _fname;
		std::string _lname;
		std::string _nname;
		std::string _phone;
		std::string _secret;
    public:
		Contact		*setFirstname(std::string);
		Contact		*setLastname(std::string);
		Contact		*setNickname(std::string);
		Contact		*setPhoneNumber(std::string);
		Contact		*setDarkestSecret(std::string);
		std::string	getFirstname(void) const;
		std::string	getLastname(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
		void		promptFirstname(void);
		void		promptLastname(void);
		void		promptNickname(void);
		void		promptPhoneNumber(void);
		void		promptDarkestSecret(void);
		void		printInfo(void);
		void		printTableRow(int index);
};
#endif