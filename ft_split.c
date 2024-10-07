/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 05:19:22 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/17 22:30:12 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_w(const char *str, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (str[x])
	{
		if (str[x] != c && (x == 0 || str[x - 1] == c))
			count++;
		x++;
	}
	return (count);
}

static void	free_space(char **res, size_t x)
{
	if (x == 0)
	{
		free(res);
		return ;
	}
	while (x)
	{
		free(res[x - 1]);
		x--;
	}
	free(res);
}

static char	**real_split(const char *s, char **res, char c, size_t wc)
{
	size_t	x;
	size_t	y;
	size_t	cc;

	x = 0;
	y = 0;
	while (x < wc)
	{
		cc = 0;
		while (s[y] && s[y] == c)
			y++;
		while (s[y] && s[y] != c)
		{
			cc++;
			y++;
		}
		res[x] = ft_substr(s, y - cc, cc);
		if (res[x] == NULL)
		{
			free_space(res, x);
			return (NULL);
		}
		x++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wc;

	if (s == NULL)
		return (NULL);
	wc = count_w(s, c);
	res = (char **)ft_calloc((sizeof(char *)), wc + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	return (real_split(s, res, c, wc));
}
