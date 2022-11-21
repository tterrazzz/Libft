/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:04:12 by avan              #+#    #+#             */
/*   Updated: 2022/11/16 15:19:42 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strtrim(char const *s1, char const *set)
{
	static int	i;
	static int	j;
	char		*str;

	if (!s1 || !set)
		return (ft_strdup(""));
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	str = ft_substr(&s1[i], 0, j - i + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
*/
int	ft_length(char const *s1, char const *set, int *start)
{
	int	end;

	end = ft_strlen(s1);
	while (s1[*start] && ft_strchr(set, s1[*start]))
		*start = *start + 1;
	while (end > *start && ft_strchr(set, s1[end - 1]))
		end--;
	return (end - *start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_length(s1, set, &i);
	str = ft_substr(s1, i, j);
	if (str == NULL)
		return (NULL);
	return (str);
}
/*
int	main(void)
{
	char	*s1 = "abcdba";
	char	*set = "acb";
	char	*str;

	str = ft_strtrim(s1, set);
	printf("Maison = %s\n", str);
	printf("len = %zu\n", ft_strlen(str));
	return (0);
}*/
