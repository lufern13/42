/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:19:16 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/25 13:40:48 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_long_int(unsigned int n, int len, char *base)
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

int	ft_putnbr_base(int n, int b)
{
	unsigned int	number;
	char			*base;
	int				sol;

	sol = 0;
	if (n < 0)
	{
		sol += write(1, "-", 1);
		n = n * (-1);
	}
	number = n;
	base = NULL;
	if (b == 10)
		base = "0123456789";
	else if (b == 16)
		base = "0123456789abcdef";
	else if (b == 17)
		base = "0123456789ABCDEF";
	sol += put_long_int(number, b, base);
	return (sol);
}

/*
int	main(void)
{
	//ft_putnbr_base(5698, 10);
	// ft_putnbr_base(-5698, 10);
	ft_putnbr_base(5698, 16);
	//ft_putnbr_base(-5698, 16);
}
*/