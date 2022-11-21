/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:46:06 by avan              #+#    #+#             */
/*   Updated: 2022/11/18 19:17:29 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*temp;

	if (!lst || !*f || !del)
		return (NULL);
	begin = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
			ft_lstclear(&begin, del);
		else
		{
			ft_lstadd_back(&begin, temp);
			lst = lst->next;
		}
	}
	return (begin);
}
