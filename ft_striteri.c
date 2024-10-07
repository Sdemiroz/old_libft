/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 03:25:51 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/18 03:34:48 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	if (s == NULL)
		return ;
	x = 0;
	while (s[x] != '\0')
	{
		(*f)(x, &s[x]);
		x++;
	}
}
