/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:39:11 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 14:59:56 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sol;

	sol = 1;
	if (nb < 0)
	{
		nb = 0;
		sol = 0;
	}
	while (nb != 0)
	{
		sol = sol * nb;
		nb--;
	}
	return (sol);
}
