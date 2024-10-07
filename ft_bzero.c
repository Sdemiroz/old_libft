/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 02:36:43 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 00:58:54 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *a, size_t len)
{
	unsigned char	*x;

	x = (unsigned char *)a;
	while (len > 0)
	{
		*x = 0;
		len--;
		x++;
	}
}
// int	main(void)
// {
// 	char str[8] = "ABCDEFG";
// 	printf("before : %s\n", str);
// 	ft_bzero(str, 3);
// 	printf("after : %c", str[1]);
// 	printf("%c", str[2]);
// 	printf("%c", str[3]);
// 	printf("%c", str[4]);
// 	printf("%c", str[5]);
// 	printf("%c", str[6]);
// 	printf("%c", str[7]);
// 	printf("%c\n", str[8]);
// 	return (0);
// }
