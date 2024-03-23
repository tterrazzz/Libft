/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:13:20 by avan              #+#    #+#             */
/*   Updated: 2022/11/13 11:31:00 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compares an int value to a dereferenced pointer to a memory area and 
 * returns the address of the memory area if its value is equal to the int 
 * value within a certain length
 *
 * @param haystack: pointer to a memory area
 * @param needle: value to find
 * @param n: length of haystack's type 
 *
 * @return the address of the memory area which value is equal to the needle; 
 * 0 if either needle = NULL or n = 0
 */
void	*ft_memchr(const void *haystack, int needle, size_t n)
{
	size_t	i;
	char	*str;

  if (!haystack)
    return ;
	i = 0;
	str = (char *)haystack;
	if (needle > 127)
		needle = (char) needle;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str[i] == needle)
			return (&str[i]);
		i++;
	}
	return (0);
}
