/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:04:32 by avan              #+#    #+#             */
/*   Updated: 2022/11/15 16:07:29 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Prints an array of char in a file descriptor
 *
 * @param s: array of char
 * @param fd: file descriptor
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
    return ;
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
