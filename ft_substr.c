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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;

	if (!s)
		return (0);
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

/*int	main(void)
  {
  char	*s = "tripouille";
  char	*smalloc;

  smalloc = ft_substr(s, 1, 1);
  printf("smalloc = %s\n", smalloc);
  return (0);
  }*/
