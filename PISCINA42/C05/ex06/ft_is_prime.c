/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:50:56 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 22:04:24 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	sol;

	i = 2;
	sol = 1;
	while (i < nb && sol == 1)
	{
		if (nb % i == 0)
			sol = 0;
		i++;
	}
	if (nb == 0 || nb == 1)
		sol = 0;
	return (sol);
}
