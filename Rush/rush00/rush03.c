/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:13:42 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/13 18:29:30 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if (column == 0 && (row == 0 || row == y - 1))
				ft_putchar('A');
			else if (column == x - 1 && (row == 0 || row == y - 1))
				ft_putchar('C');
			else if (column == 0 || column == x - 1 || row == 0 || row == y - 1)
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
