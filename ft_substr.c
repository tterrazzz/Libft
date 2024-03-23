/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:11:59 by avan              #+#    #+#             */
/*   Updated: 2022/11/18 19:46:05 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a dynamically memory allocated array of char, it has to be freed by 
 * the user after use
 *
 * @param s: array of char to copy
 * @param start: starting index to begin copy
 * @param len: length to copy from the starting index
 *
 * @return a dynamically memory allocated array of char; same, size 1 if start 
 * is bigger than len; NULL if s = NULL
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l)
		return (ft_strdup(""));
	l = l - start + 1;
	if (l > len)
		l = len + 1;
	str = malloc(sizeof(char) * l);
	if (!str)
		return (str);
	l = ft_strlcpy(str, &s[start], l);
	return (str);
}
