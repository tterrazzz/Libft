/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:38:16 by avan              #+#    #+#             */
/*   Updated: 2022/11/14 17:51:31 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (!*str)
			break ;
		str++;
	}
	if (c == '\0')
		return (str);
	str--;
	while (*str != (char) c)
	{
		if (*str == *s)
			return (0);
		str--;
	}
	return (str);
}
