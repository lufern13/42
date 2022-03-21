/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:52:40 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 14:07:06 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	sol;

	sol = 0;
	if (c >= '0' && c <= '9')
		sol = 1;
	return (sol);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	sol;

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
	while (ft_isdigit(str[i]))
	{
		sol = (sol * 10) + (str[i] - '0');
		i++;
	}
	return (sol * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*s = "    -  234*5";

	printf("%d  %d", ft_atoi(s), atoi(s));
	return (0);
}
*/