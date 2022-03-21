/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:45:31 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/15 17:41:33 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	dig1;
char	dig2;
char	dig3;
char	dig4;

void	write_numbers(char dig1, char dig2, char dig3, char dig4)
{
	write(1, &dig1, 1);
	write(1, &dig2, 1);
	write(1, " ", 1);
	write(1, &dig3, 1);
	write(1, &dig4, 1);
	write(1, "\n", 1);
}

void	ft_print_comb2(void)
{
	dig1 = '0';
	dig2 = '0';
	dig3 = '0';
	dig4 = '1';
	while (dig1 <= '9')
	{
		write_numbers(dig1, dig2, dig3, dig4);
		if (dig4 != '9')
			dig4++;
		else if (dig3 != '9') //dig4 = 9
		{
			dig3++;
			dig4 = '0';
		}
	/*	else if (dig1 == '9' && dig2 != '9')
		{
			dig2++;
			dig3 = '9';
			dig4 = dig2 + 1;
		}*/
		else if (dig1 < dig3 && dig2 != '9') //dig4 = 9 y dig3 = 9
		{
			dig2++;
			if (dig2 < '9')
			{
				dig4 = dig2 + 1;
				dig3 = dig1;
			}
			else
			{
				dig4 = '0';
				dig3 = dig1 + 1;
			}
		}
		else //d2, d3, d4 = 9
		{
			dig1++;
			dig2 = '0';
			dig3 = dig1;
			dig4 = dig2 + 1;
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
