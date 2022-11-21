/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:13:18 by avan              #+#    #+#             */
/*   Updated: 2022/11/09 17:04:28 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*#include <ctype.h>
int	main(void)
{
	int	c;
	int	c2;

	c = 100;
	c2 = 100;
	printf("%d", ft_toupper(c));
	printf("%d", toupper(c2));
	return (0);
}*/
