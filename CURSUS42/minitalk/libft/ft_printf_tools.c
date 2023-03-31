/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:48:19 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/31 21:02:02 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(void *p)
{
	int	sol;

	sol = write(1, "0x", 2);
	sol += ft_putnbr_unsig((unsigned long)p, 16);
	return (sol);
}

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

static int	put_long_int_unsig(unsigned long int n, int len, char *base)
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
		sol += put_long_int_unsig(n / len, len, base);
		sol += put_long_int_unsig(n % len, len, base);
	}
	return (sol);
}

int	ft_putnbr_unsig(unsigned long int n, int b)
{
	char				*base;
	int					sol;

	base = NULL;
	if (b == 10)
		base = "0123456789";
	else if (b == 16)
		base = "0123456789abcdef";
	else if (b == 17)
	{
		b = 16;
		base = "0123456789ABCDEF";
	}
	sol = put_long_int_unsig(n, b, base);
	return (sol);
}