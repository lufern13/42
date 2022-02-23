/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:30:05 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/23 11:13:13 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev_tab[10];
	int	i;

	i = 0;
	while (i < size)
	{
		rev_tab[size - i - 1] = *(tab + i);
		i++;
	}
	i = 0;
	while (i < size)
	{
		*(tab + i) = rev_tab[i];
		i++;
	}
}
