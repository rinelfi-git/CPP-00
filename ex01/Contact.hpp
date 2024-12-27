/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:19:06 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 11:16:45 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>

typedef std::string	t_str;

class Contact
{
    public:
        t_str	firstname;
		t_str	lastname;
		t_str	nickname;
		t_str	phone_number;
		t_str	darkest_secret;
		Contact(void);
		Contact(
			t_str,
			t_str,
			t_str,
			t_str,
			t_str);
		void	prompt(t_str msg, t_str &in);
};
#endif