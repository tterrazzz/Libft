/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:47:57 by avan              #+#    #+#             */
/*   Updated: 2022/11/15 18:59:02 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creates a first node of linked list and uses a pointer to initialize its 
 * content
 *
 * @param content: pointer to use for the node's content
 *
 * @return the first node of a linked list; NULL if content = NULL
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

  if (!content)
    return (NULL);
	list = malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
