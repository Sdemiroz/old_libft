/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:29:16 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/14 01:08:41 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
		|| (a >= '0' && a <= '9'))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char a;
//     a = ',';
//     printf("%d", ft_isalnum(a));
//     return(0);
// }