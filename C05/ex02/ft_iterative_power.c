/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:05:56 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 15:12:42 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sol;

	if (power < 0)
		sol = 0;
	else if (power == 0)
		sol = 1;
	else
	{
		sol = 1;
		while (power != 0)
		{
			sol = sol * nb;
			power--;
		}
	}
	return (sol);
}
