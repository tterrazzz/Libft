/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:01:55 by avan              #+#    #+#             */
/*   Updated: 2022/11/16 18:45:44 by avan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
   int	main(void)
   {
   t_list	*lst;
   t_list	*new;

   lst = ft_lstnew(ft_strdup("NYANCAT"));
   new = ft_lstnew(ft_strdup("OK"));

   printf("adresse de lst : %p\n", lst);
   printf("adresse de new : %p\n", new);
   printf("adresse de new->next : %p\n", lst);
   return (0);
   }*/
