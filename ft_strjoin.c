/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 03:27:52 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/15 03:49:46 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	lens1;
	size_t	lens2;
	size_t	len;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	len = lens1 + lens2 + 1;
	new = (char *)malloc(len);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1, lens1);
	ft_memcpy(new + lens1, s2, lens2 + 1);
	return (new);
}
