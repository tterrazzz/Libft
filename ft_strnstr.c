/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:07:33 by avan              #+#    #+#             */
/*   Updated: 2022/11/14 12:08:44 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_translation(char *str, char *tosearch)
{
	int	i;

	i = 0;
	while (tosearch[i])
	{
		if (str[i] != tosearch[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*str;
	char	*tosearch;

	str = (char *) haystack;
	tosearch = (char *) needle;
	if (*needle == 0)
		return (str);
	if (len == 0)
		return (0);
	len = len - ft_strlen(tosearch);
	i = 0;
	while (str[i] && i <= len)
	{
		if (ft_translation(&str[i], tosearch))
			return (&str[i]);
		i++;
	}
	return (0);
}
