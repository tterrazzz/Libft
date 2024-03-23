/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:46:06 by avan              #+#    #+#             */
/*   Updated: 2022/11/14 13:02:23 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Joints two array of char and returns a dynamically memory allocated array of 
 * char, it has to be freed by the user after use
 *
 * @param s1: array of char
 * @param s2: second array of char
 *
 * @return a dynamically memory allocated array of char; same, size 1 if s1 or 
 * s2 = NULL, still has to be freed by the user
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*str;

	if (!s1 || !s2)
		return (ft_strdup(""));
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && *s1)
		str[i++] = *s1++;
	while (i < len && *s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
