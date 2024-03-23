/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:41:29 by avan              #+#    #+#             */
/*   Updated: 2022/11/16 16:00:16 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Sets all bytes to 0 within a chosen length
 *
 * @param s: pointer to use
 * @param n: length
 */
void	ft_bzero(void *s, size_t n)
{
  if (!s)
    return ;
	s = ft_memset(s, 0, n);
}
