/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:35:04 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/18 01:55:15 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_dcount(long x)
{
	size_t	len;

	len = 1;
	if (x < 0)
		x = -x;
	while (x > 9)
	{
		x = x / 10;
		len++;
	}
	return (len);
}

static char	*ft_magic(long x, int len, int sign)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (x == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (sign == -1)
	{
		str[0] = '-';
		x = -x;
	}
	while (x != 0)
	{
		str[--len] = '0' + (x % 10);
		x /= 10;
	}
	return (str);
}

char	*ft_itoa(int x)
{
	size_t	len;
	char	*str;
	int		sign;
	long	xcase;

	xcase = x;
	len = ft_dcount(xcase);
	sign = 1;
	if (x < 0)
	{
		sign = -1;
		len++;
	}
	str = ft_magic(xcase, len, sign);
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-1024));
// 	return (0);
// }