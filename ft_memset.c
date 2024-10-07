/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:16:32 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 01:10:23 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int c, size_t len)
{
	unsigned char	*x;

	x = (unsigned char *)a;
	while (len > 0)
	{
		*x = (unsigned char)c;
		len--;
		x++;
	}
	return (a);
}
// int	main(void)
// {
// 	char str[] = "ABCDEFG";
// 	printf("before : %s\n", str);
// 	ft_memset(str, 'x', 3);
// 	printf("after : %s\n", str);
// }
