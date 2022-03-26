/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:52:40 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/26 17:30:27 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int	ft_isdigit(int c);

int	process(char *str, int i, int neg, long int sol)
{
	while (ft_isdigit(str[i]))
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
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*s = "-2147483649999";

	printf("%d  %d", ft_atoi(s), atoi(s));
	return (0);
}*/
