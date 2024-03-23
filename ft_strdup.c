/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:32:40 by avan              #+#    #+#             */
/*   Updated: 2022/11/14 11:22:17 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies an array of char and returns a new dynamically memory allocated array 
 * of char, it has to be freed by the user after use
 *
 * @param s1: array of char
 *
 * @return a pointer to a dynamically memory allocated copy array of char; NULL 
 * if s1 = NULL
 */
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;
	int		len;

  if (!s1)
    return (NULL);
	i = 0;
	len = ft_strlen(s1);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
