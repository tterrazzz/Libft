/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:07:22 by avan              #+#    #+#             */
/*   Updated: 2022/11/18 20:10:24 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Adds a node to the end of the linked list
 *
 * @param lst: pointer to the linked list's first node address
 * @param new: pointer to the node to add
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

  if (!new)
    return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
