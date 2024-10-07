/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:53:38 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/20 03:34:21 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*x;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	tmp = lst;
	new_l = NULL;
	while (tmp)
	{
		x = malloc(sizeof(t_list));
		if (!x)
		{
			ft_lstclear(&new_l, del);
			free(x);
			return (NULL);
		}
		x -> content = f(tmp -> content);
		x -> next = NULL;
		ft_lstadd_back(&new_l, x);
		tmp = tmp -> next;
	}
	free(tmp);
	return (new_l);
}
