/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:42:29 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/16 14:30:44 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int num1)
{
	char	unidad1;
	char	decena1;

	decena1 = num1 / 10 + '0';
	unidad1 = num1 % 10 + '0';
	write(1, &decena1, 1);
	write(1, &unidad1, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 < 100)
	{
		write_number(num1);
		write(1, " ", 1);
		write_number(num2);
		if (num1 != 98 || num2 != 99)
		{
			write(1, ", ", 2);
		}
		if (num2 < 99)
			num2 = num2 + 1;
		else if (num1 < 98)
		{
			num1 = num1 + 1;
			num2 = num1 + 1;
		}
		else
			num1 = 100;
	}
}
