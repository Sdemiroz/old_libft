/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:38:40 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 05:08:18 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	a;

	a = 0;
	while (c[a] != '\0')
		a++;
	return (a);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "was geht!?";
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }