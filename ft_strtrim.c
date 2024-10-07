/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 03:46:24 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/15 05:24:00 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char const c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trim;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = start + ft_strlen(s1) -1;
	while (*start && ft_set(*start, set))
		start++;
	while (end > start && ft_set(*end, set))
		end--;
	len = end - start + 2;
	trim = (char *)malloc(len);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, start, len);
	return (trim);
}
