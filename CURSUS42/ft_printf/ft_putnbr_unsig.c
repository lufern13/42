/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:02:22 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/20 19:06:39 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_long_int(unsigned long long int n, int len, char *base)
{
	char	cifra;
	int		sol;

	sol = 0;
	if (n < (unsigned)len)
	{
		cifra = base[n];
		sol += write(1, &cifra, 1);
	}
	else
	{
		sol += put_long_int(n / len, len, base);
		sol += put_long_int(n % len, len, base);
	}
	return (sol);
}

int	ft_putnbr_unsig(unsigned long int n, int b)
{
	unsigned long long	number;
	char				*base;
	int					sol;

	base = NULL;
	number = n;
	if (b == 10)
		base = "0123456789";
	else if (b == 16)
		base = "0123456789abcdef";
	else if (b == 17)
	{
		b = 16;
		base = "0123456789ABCDEF";
	}
	sol = put_long_int(number, b, base);
	return (sol);
}
