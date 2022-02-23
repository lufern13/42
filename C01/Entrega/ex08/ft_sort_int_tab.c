/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:26:51 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/23 15:58:20 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//BUBBLESORT
void	ft_swap(int *a, int *b)
{
	int	valor;

	valor = *a;
	*a = *b;
	*b = valor;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i <= size - k - 1)
	{
		if (*(tab + i) > *(tab + i + 1))
		{
			ft_swap((tab + i), (tab + i + 1));
		}
		i++;
		if (i == size - k - 1)
		{
			i = 0;
			k++;
		}
	}
}
