/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:07:37 by avan              #+#    #+#             */
/*   Updated: 2022/11/15 16:11:13 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Prints an array of char in a file descriptor, adds a new line after
 *
 * @param s: array of char
 * @param fd: file descriptor
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
    return ;
  ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
