/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:28:54 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/19 23:43:06 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*x;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		x = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = x;
	}
	*lst = NULL;
}
