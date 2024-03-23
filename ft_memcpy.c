/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:34:17 by avan              #+#    #+#             */
/*   Updated: 2022/11/14 11:12:34 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies from a pointer to a memory area to another memory area within a 
 * chosen length, does not do any dynamic allocation
 *
 * @param dst: destination memory area
 * @param src: source memory area
 * @param n: length
 *
 * @return a pointer destination memory area; NULL if either dst or src = NULL
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ptrdst;
	const char	*ptrsrc;

  if (!dst || !src)
    return (NULL);
	ptrdst = dst;
	ptrsrc = src;
	i = 0;
	if (ptrdst == ptrsrc)
		return (dst);
	while (i < n)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
