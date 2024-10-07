/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:57:57 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 05:09:22 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	dlen;
	size_t	slen;
	size_t	x;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	x = 0;
	if (len <= dlen)
		return (len + slen);
	while (src[x] != '\0' && (dlen + x) < (len - 1))
	{
		dest[dlen + x] = src[x];
		x++;
	}
	dest[dlen + x] = '\0';
	return (dlen + slen);
}
