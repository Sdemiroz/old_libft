/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:14:00 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 03:26:12 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (b < a)
	{
		a += len - 1;
		b += len -1;
		while (len-- > 0)
		{
			*a-- = *b--;
		}
	}
	else
	{
		while (len-- > 0)
			*a++ = *b++;
	}
	return (dest);
}
