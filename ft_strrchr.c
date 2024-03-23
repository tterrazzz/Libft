/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:38:16 by avan              #+#    #+#             */
/*   Updated: 2022/11/23 10:32:38 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Searches an int value inside an array of char
 *
 * @param haystack: array of char to search in
 * @param needle: int value
 *
 * @return the address of the found value inside the array of char; the address 
 * to the '\0' of the array of char if needle = 0; NULL if haystack = NULL
 */
char	*ft_strrchr(const char *haystack, int needle)
{
	char	a;
	int		i;

  if (!haystack)
    return (NULL);
	i = 0;
	a = (char) needle;
	if (a == 0)
		return (&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == a)
      return (&s[i]);
		i++;
	}
	return (NULL);
}
