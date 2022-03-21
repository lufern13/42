/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:43:10 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/21 17:51:16 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_long_int(long int n)
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
		put_long_int(n / 10);
		put_long_int(n % 10);
	}
}

void	ft_putnbr(int n)
{
	long int	number;

	number = n;
	put_long_int(number);
}
