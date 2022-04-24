/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:10:52 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/20 17:15:00 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process(char *str, int i, int neg, long int sol)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		sol = (sol * 10) + (str[i] - '0');
		if (sol * neg < -2147483648)
			return (0);
		else if (sol * neg > 2147483647)
			return (-1);
		i++;
	}
	return (sol);
}

int	ft_atoi(char *str)
{
	int			i;
	int			neg;
	long int	sol;

	i = 0;
	neg = 1;
	sol = 0;
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	sol = process(str, i, neg, sol);
	return (sol * neg);
}