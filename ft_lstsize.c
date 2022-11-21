/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:46:51 by avan              #+#    #+#             */
/*   Updated: 2022/11/21 10:42:18 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*list;

	if (!lst)
		return (0);
	size = 0;
	list = lst;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
