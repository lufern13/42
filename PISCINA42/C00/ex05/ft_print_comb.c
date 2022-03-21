/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:18:49 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/21 16:55:14 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	dig1;
	char	dig2;
	char	dig3;

	dig1 = '0';
	while (dig1 < '8')
	{
		dig2 = dig1 + 1;
		while (dig2 < '9')
		{
			dig3 = dig2 + 1;
			while (dig3 <= '9')
			{
				write(1, &dig1, 1);
				write(1, &dig2, 1);
				write(1, &dig3, 1);
				if (dig1 != '7' || dig2 != '8' || dig3 != '9')
					write(1, ", ", 2);
				dig3 = dig3 + 1;
			}
			dig2 = dig2 + 1;
		}
		dig1 = dig1 + 1;
	}
}
