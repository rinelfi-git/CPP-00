/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:04:51 by erijania          #+#    #+#             */
/*   Updated: 2024/12/28 08:24:19 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# define MAX_LEN 8
# define TRUNC_AT 10
# include "Contact.hpp"

class PhoneBook
{
private:
    int		_length;
	Contact	_contacts[MAX_LEN];
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
