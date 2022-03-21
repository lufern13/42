/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:49:01 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/13 18:36:19 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1))
				ft_putchar('/');
			else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
				ft_putchar(92);
			else if (col == 0 || col == x - 1 || row == 0 || row == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			if (col == x - 1)
				ft_putchar('\n');
			col = col + 1;
		}
		row = row + 1;
	}
}
