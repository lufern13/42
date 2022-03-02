/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 21:22:34 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/01 21:18:04 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	conditions(char *base, int sol, int i)
{
	int	count;
	int	j;

	if (base[i] == '+' || base[i] == '-')
		sol = 0;
	else
	{
		count = 0;
		j = 1;
		while (base[i + j] != '\0' && count == 0)
		{
			if (base[i] == base[i + j])
				count++;
			j++;
		}
		if (count > 0)
			sol = 0;
	}
	return (sol);
}

int	valid_input(char *base)
{
	int	i;
	int	sol;

	i = 0;
	sol = 1;
	if (base[0] == '\0')
		sol = 0;
	else if (ft_strlen(base) == 1)
		sol = 0;
	else
	{
		while (base[i] != '\0' && sol == 1)
		{
			sol = conditions(base, sol, i);
			i++;
		}
	}
	return (sol);
}

void	ft_putnbr_base_rec(char *base, int nbr, int len)
{
	if (nbr < len)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		ft_putnbr_base_rec(base, nbr / len, len);
		ft_putnbr_base_rec(base, nbr % len, len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (valid_input(base) == 1)
	{
		len = ft_strlen(base);
		ft_putnbr_base_rec(base, nbr, len);
	}
}
