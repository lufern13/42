/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:43:10 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/15 19:42:22 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	cifra;

	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n < 10)
	{
		cifra = n + '0';
		write(1, &cifra, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	int n;

	n = -2147483648;
	ft_putnbr(n);
	return (0);
}
