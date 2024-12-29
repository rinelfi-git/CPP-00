/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:04:51 by erijania          #+#    #+#             */
/*   Updated: 2024/12/29 10:27:49 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__
# include "phonebook.h"
# include "Contact.hpp"

class PhoneBook
{
private:
    int		_length;
	Contact	_contacts[MAX_CONTACT_RECORD];
	void	_drawTableLine();
	void	_printFormated(std::string);
public:
    PhoneBook(void);
    ~PhoneBook(void);
	void	add(Contact contact);
	void    addPrompt(void);
	void	searchPrompt(void);
};

#endif
