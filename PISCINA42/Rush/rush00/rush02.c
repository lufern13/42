/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:38:59 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/13 18:37:47 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if (row == 0 && (column == 0 || column == x - 1))
				ft_putchar('A');
			else if (row == y - 1 && (column == 0 || column == x - 1))
				ft_putchar('C');
			else if (row == 0 || row == y - 1 || column == 0 || column == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (column == x - 1)
				ft_putchar('\n');
			column = column + 1;
		}
		row = row + 1;
	}
}
