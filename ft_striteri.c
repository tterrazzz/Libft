/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:54:12 by avan              #+#    #+#             */
/*   Updated: 2022/11/19 12:55:46 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates a function within an array of char
 *
 * @param s: array of char
 * @param f: pointer to function to use
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  unsigned int	i;

  if (!s || !f)
    return ;
  i = 0;
  while (s[i])
  {
    f(i, &s[i]);
    i++;
  }
}
