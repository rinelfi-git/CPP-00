/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:04:51 by erijania          #+#    #+#             */
/*   Updated: 2025/04/27 09:44:29 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__
# include "Contact.hpp"
# define TRUNC_AT 10

class PhoneBook
{
private:
    int		_length;
	Contact	_contacts[MAX_CONTACT_RECORD];
	void	_add(Contact contact);
public:
    PhoneBook(void);
    ~PhoneBook(void);
	void    addPrompt(void);
	void	searchPrompt(void);
};

#endif
