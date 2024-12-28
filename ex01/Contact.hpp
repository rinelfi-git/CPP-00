/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:19:06 by erijania          #+#    #+#             */
/*   Updated: 2024/12/28 08:17:28 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
# define __CONTACT_H__
# include <iostream>

class Contact
{
    public:
        std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		Contact(void);
		void	prompt(std::string msg, std::string &in);
};
#endif