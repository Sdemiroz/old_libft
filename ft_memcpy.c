/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:17:49 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 03:25:59 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char			*a;
	const unsigned char		*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (len > 0)
	{
		*a = *b;
		a++;
		b++;
		len--;
	}
	return (dest);
}
