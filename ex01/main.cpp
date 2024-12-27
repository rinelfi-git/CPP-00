/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:08:24 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 10:18:17 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"



int	main(void)
{
	PhoneBook	phone;

	phone.add("Rijaniaina Elie Fidele");
	phone.add("Ravelo");
	phone.print();
	return (0);
}
