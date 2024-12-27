/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:23:10 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 11:18:40 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void):
    firstname(""),
    lastname(""),
    nickname(""),
    phone_number(""),
    darkest_secret("")
{
}

Contact::Contact(
    t_str firstname,
    t_str lastname,
    t_str nickname,
    t_str phone_number,
    t_str darkest_secret):
    firstname(firstname),
    lastname(lastname),
    nickname(nickname),
    phone_number(phone_number),
    darkest_secret(darkest_secret)
{
}

void    Contact::prompt(t_str msg, t_str &in)
{
    std::cout << msg << " : " << std::ends;
    std::getline(std::cin, in);
}
