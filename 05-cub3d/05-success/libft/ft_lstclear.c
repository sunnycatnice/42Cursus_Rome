/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaderi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:12:24 by crossi            #+#    #+#             */
/*   Updated: 2021/04/08 17:09:49 by rpaderi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*i;

	i = *lst;
	while (i)
	{
		del(i->content);
		tmp = i->next;
		free(i);
		i = tmp;
	}
	*lst = 0;
}
