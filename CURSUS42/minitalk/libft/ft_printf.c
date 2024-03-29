/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:09:50 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/12 18:17:51 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	process(char c, va_list arg, int sol)
{
	if (c == 'c')
		sol += ft_putchar_fd(va_arg(arg, int), 1);
	else if (c == 's')
		sol += ft_putstr_fd(va_arg(arg, char *), 1);
	else if (c == 'p')
		sol += ft_putptr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		sol += ft_putnbr_base(va_arg(arg, int), 10);
	else if (c == 'u')
		sol += ft_putnbr_unsig(va_arg(arg, unsigned int), 10);
	else if (c == 'x')
		sol += ft_putnbr_unsig(va_arg(arg, unsigned int), 16);
	else if (c == 'X')
		sol += ft_putnbr_unsig(va_arg(arg, unsigned int), 17);
	else if (c == '%')
		sol += ft_putchar_fd('%', 1);
	else
		sol += ft_putchar_fd(c, 1);
	return (sol);
}

int	ft_printf(char const *s, ...)
{
	int		i;
	int		sol;
	va_list	arg;

	i = 0;
	va_start(arg, s);
	sol = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c' || s[i] == 's' || s[i] == 'p' || s[i] == 'd'
				|| s[i] == 'i' || s[i] == 'u' || s[i] == 'x' || s[i] == 'X'
				|| s[i] == '%')
				sol = process(s[i], arg, sol);
		}
		else
			sol += ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(arg);
	return (sol);
}
/*
#include <limits.h>
int	main(void)
{
	int	a;

	a = ft_printf("%i", 10+20);
	printf("\nSOL: %i", 10+20);
}
*/