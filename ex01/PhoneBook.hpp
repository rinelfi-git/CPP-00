/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:04:51 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 10:15:42 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# define MAX_LEN 8
# define TRUNC_AT 10
# include <iostream> 

class PhoneBook
{
private:
    int			_length;
	std::string	_contacts[MAX_LEN];
public:
    PhoneBook(void);
    ~PhoneBook(void);
	void	add(std::string contact);
	void	print(void);
};

#endif
