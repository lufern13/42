/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:46:20 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 15:04:26 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	sol;

	if (nb < 0)
		sol = 0;
	else if (nb == 0)
		sol = 1;
	else
		sol = nb * ft_recursive_factorial(nb - 1);
	return (sol);
}
