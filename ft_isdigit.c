/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:24:26 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/13 02:31:01 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char a;
//     a = '7';
//     printf("%d", ft_isdigit(a));
//     return(0);
// }