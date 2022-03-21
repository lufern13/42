/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:29:38 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/02 19:01:29 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	sol;

	if (index < 0)
		sol = -1;
	else if (index == 0)
		sol = 0;
	else if (index == 1 || index == 2)
		sol = 1;
	else if (index == 3)
		sol = 2;
	else
		sol = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (sol);
}
