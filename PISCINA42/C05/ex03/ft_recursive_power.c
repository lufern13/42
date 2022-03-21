/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:13:34 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 18:28:32 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sol;

	if (power < 0)
		sol = 0;
	else if (power == 0)
		sol = 1;
	else
		sol = nb * ft_recursive_power(nb, power - 1);
	return (sol);
}
