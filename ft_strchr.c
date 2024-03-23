/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:25:45 by avan              #+#    #+#             */
/*   Updated: 2022/11/13 14:31:05 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Searchs an int value inside an array of char
 *
 * @param s: array of char
 * @param c: value to find
 *
 * @return the address of the found int value; NULL if not found or if s = NULL
 */
char	*ft_strchr(const char *s, int c)
{
	char	*str;

  if (!s)
    return (NULL);
	str = (char *)s;
	while (*str != (char) c)
	{
		if (!*str)
			return (0);
		str++;
	}
	return (str);
}
