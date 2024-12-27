/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 08:48:20 by erijania          #+#    #+#             */
/*   Updated: 2024/12/27 10:01:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_arg(char *str)
{
    int i;

    i = 0;
    while (str[i])
        std::cout << (char) std::toupper(str[i++]);
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (i < argc)
            print_arg(argv[i++]);
        std::cout << std::endl;
    }
    return (0);
}
