/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:23:10 by erijania          #+#    #+#             */
/*   Updated: 2024/12/28 08:13:09 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

void    Contact::prompt(std::string msg, std::string &in)
{
    std::cout << msg << " : " << std::ends;
    std::getline(std::cin, in);
}
