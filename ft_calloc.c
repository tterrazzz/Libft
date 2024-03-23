/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:35:24 by avan              #+#    #+#             */
/*   Updated: 2022/11/17 13:42:47 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Dynamically allocates memory in the heap and sets the bytes value to 0
 *
 * @param count: number of elements
 * @param size: size of the element
 *
 * @return a pointer to the allocated memory, it has to be freed by the user 
 * after use; NULL if the count or size values are higher than SIZE_MAX
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if ((count == SIZE_MAX && size == SIZE_MAX))
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(0));
	tab = malloc(count * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}
