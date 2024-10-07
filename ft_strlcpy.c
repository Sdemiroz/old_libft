/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:38:19 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 03:54:39 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	x;

	x = 0;
	while (src[x] != '\0' && x < len - 1)
	{
		if (len != 0)
			dest[x] = src[x];
		x++;
	}
	if (len != 0)
		dest[x] = '\0';
	while (src[x] != '\0')
		x++;
	return (x);
}
