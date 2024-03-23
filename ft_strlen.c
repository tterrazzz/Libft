/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:30:39 by avan              #+#    #+#             */
/*   Updated: 2022/11/14 17:38:32 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Gets the length of an array of char
 *
 * @param str: array of char
 *
 * @return the length of str; -1 if str = NULL
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

  if (!str)
    return (-1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
