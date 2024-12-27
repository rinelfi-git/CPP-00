/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:04:51 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 11:23:25 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# define MAX_LEN 8
# define TRUNC_AT 10
# include <iostream> 
# include "Contact.hpp"

class PhoneBook
{
private:
    int		_length;
	Contact	_contacts[MAX_LEN];
public:
    PhoneBook(void);
    ~PhoneBook(void);
	void	add(Contact contact);
	void    add_prompt(void);
	void	print(void);
};

#endif
