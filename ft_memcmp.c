/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:28:11 by avan              #+#    #+#             */
/*   Updated: 2022/11/13 14:11:35 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare each value between two dereferenced pointers to their respective 
 * memory area within a chosen length
 *
 * @param s1: first pointer to a memory area
 * @param s2: second pointer to a memory area
 * @param n: length
 *
 * @return the difference of value between two different dereferenced pointers; 
 * -1 if s1 = NULL or s2 = NULL
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

  if (!s1 || !s2)
    return (-1);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == s2)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
