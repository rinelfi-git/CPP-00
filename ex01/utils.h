/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:44:03 by erijania          #+#    #+#             */
/*   Updated: 2025/04/27 17:42:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <iostream>

bool	is_number(std::string str);
void    str_replace(std::string &src, const char *search, const char *replace);
bool    is_printable(std::string str);
#endif