/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:50:55 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/15 03:21:20 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	slen;
	char	*ss;

	x = 0;
	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	ss = (char *)malloc(len + 1);
	if (ss == NULL)
		return (NULL);
	while (x < len && s[start + x])
	{
		ss[x] = s[start + x];
		x++;
	}
	ss[x] = '\0';
	return (ss);
}
