/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:57:52 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 23:02:00 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*x;

	x = s;
	while (n-- > 0)
	{
		if (*x == (unsigned char)c)
			return ((void *)x);
		x++;
	}
	return (NULL);
}
