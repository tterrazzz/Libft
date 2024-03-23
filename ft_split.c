/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:51:11 by avan              #+#    #+#             */
/*   Updated: 2022/11/18 20:08:31 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* c is the delimiter
 */
static void	ft_translation(char const *s, char c, int *i)
{
	int	j;

	j = 0;
	while (s[j] && s[j] == c)
		j++;
	*i = *i + j - 1;
}

/* c is the delimiter
 */
static void	ft_translationdif(char const *s, char c, int *i, int nb)
{
	int	j;

	j = 0;
	(void) nb;
	while (s[j] && s[j] != c)
		j++;
	*i = *i + j - 1;
}

/* c is the delimiter
 */
static char	*ft_allocate_word(char const *strpos, char c, int *i, char **stock)
{
	int		j;
	int		nb;
	char	*str;

	j = 0;
	nb = 0;
	while (strpos[j] && strpos[j] != c)
		j++;
	str = ft_substr(strpos, 0, j);
	if (str == NULL)
	{
		while (stock[nb])
			free(stock[nb++]);
		free(stock);
		return (NULL);
	}
	*i = *i + j - 1;
	return (str);
}

/* Splits an array of char with a chosen delimiter into an array of words, 
 * dynamically allocates memory in the heap, the array and its contents must be
 * freed by the user after use
 *
 * @param s: array of char
 * @param delimiter
 * 
 * @return a dynamically memory allocated array of words; NULL if s = NULL
 */
char	**ft_split(char const *s, char delimiter)
{
	int			i;
	int			nb;
	char		**stock;

	if (!s)
		return (NULL);
	i = -1;
	nb = 0;
	while (s[++i])
	{
		if (s[i] == delimiter)
			ft_translation(&s[i], delimiter, &i);
		else if (s[i] != delimiter)
			ft_translationdif(&s[i], delimiter, &i, nb++);
	}
	stock = (char **) malloc(sizeof(char *) * (nb + 1));
	if (stock == NULL)
		return (NULL);
	i = -1;
	nb = 0;
	while (s[++i])
		if (s[i] != delimiter)
			stock[nb++] = ft_allocate_word(&s[i], delimiter, &i, stock);
	stock[nb] = NULL;
	return (stock);
}
