/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:14:20 by avan              #+#    #+#             */
/*   Updated: 2022/11/13 17:35:07 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Converts an array of char to an int value, ignores all whitespaces at the 
 * front of the array, and takes into account only one sign '-' or '+', if at 
 * some point the value is not numerical, it stops the process and returns the 
 * finalized value
 *
 * @param str: array of char to use
 *
 * @return the int value
 */
int	ft_atoi(const char *str)
{
	char	*s;
	int		nb;
	int		signe;

  if (!str)
    return (0);
	nb = 0;
	signe = 1;
	s = (char *) str;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			signe = -signe;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		nb = nb * 10 + (*s - 48);
		s++;
	}
	return (nb * signe);
}
