/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:37:20 by avan              #+#    #+#             */
/*   Updated: 2022/11/09 17:40:58 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Sets all bytes within a chosen length of a memory area
 *
 * @param b: pointer to the memory area
 * @param c: value to use to set
 * @param len: length
 *
 * @return the pointer to the memory area; NULL if b = NULL
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

  if (!b)
    return (NULL);
	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
