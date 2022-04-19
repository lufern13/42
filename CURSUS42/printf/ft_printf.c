/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:49:24 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/19 20:03:28 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	process(char c, char *param, int sol)
{
	char	*hexa;
	char	*hexamay;

	hexa = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e', 'f'};
	hexamay = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E', 'F'};
	if (c == 'c')
		ft_putchr(*param);
	else if (c == 's')
		ft_putstr(param);
	else if (c == 'p')
		ft_putptr(param);
	else if (c == 'd')
		ft_putnbrdec(param);
	else if (c == 'i')
		ft_putstr(ft_itoa(param));
	else if (c == 'u')
		ft_putstr(ft_itoa(param));
	else if (c == 'x')
		ft_putnbr_base(param, hexa);
	else if (c == 'X')
		ft_putnbr_base(param, hexamay);
	else if (c == '%')
		ft_putchr('%');
	if (c == '%')
		sol++;
	else
		sol = sol + ft_strlen(param);
	return (sol);
}

int	ft_printf(char const *s, ...)
{
	int	i;
	int	sol;

	i = 0;
	sol = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c' || s[i] == 's' || s[i] == 'p' || s[i] == 'd'
				|| s[i] == 'i' || s[i] == 'u' || s[i] == 'x' || s[i] == 'X'
				|| s[i] == '%')
				sol = process(s[i], param, sol);
			param++;
		}
		else
		{
			ft_putchr(s[i]);
			sol++;
		}
		i++;
	}
	return (sol);
}
