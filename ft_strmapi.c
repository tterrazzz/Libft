/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:24:58 by avan              #+#    #+#             */
/*   Updated: 2022/11/15 15:52:16 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates a chosen function within a array of char and returns a dynamically 
 * memory allocated result array of char, it has to be freed by the user after 
 * use
 *
 * @param s: array of char to use
 * @param f: pointer to function to use
 *
 * @return a dynamically memory allocated array of char, resulted from the 
 * iteration function; same, size 1 if either s or f = NULL
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (ft_strdup(""));
	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
