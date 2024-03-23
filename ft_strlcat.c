/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:03:21 by avan              #+#    #+#             */
/*   Updated: 2022/11/14 12:09:35 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Concatenates a destination array of char with a source array of char within 
 * a chosen length
 *
 * @param dst: destination array of char
 * @param src: source array of char
 * @param dstsize: length
 *
 * @return the source array of char's length if dstsize = 0; source array of 
 * char's length + dstsize if dstsize is lower than the destination array of 
 * char's length; destination array of char's original length + source array 
 * of char's length; -1 if either dst or src = NULL
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	y;

  if (!dst || !src)
    return (-1);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	y = j;
	if (dstsize < j)
		return (dstsize + ft_strlen(src));
	while (src[i] && j < (dstsize - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (y + ft_strlen(src));
}
