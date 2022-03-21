/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:04:46 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 22:50:29 by lucifern         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;
	int	sol;

	i = nb;
	sol = 0;
	while (sol == 0 && i <= 2147483647)
	{
		if (ft_is_prime(i) == 1)
			sol = i;
		i++;
	}
	return (sol);
}
