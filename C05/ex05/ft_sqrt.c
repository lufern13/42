/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:02:05 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 21:50:12 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cuad(int n)
{
	return (n * n);
}

int	ft_sqrt(int nb)
{
	int	i;
	int	sol;

	i = 1;
	sol = 0;
	while (i <= (nb / 2) && sol == 0)
	{
		if (cuad(i) == nb)
			sol = i;
		i++;
	}
	return (sol);
}
