/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:30:48 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/05 21:20:51 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_numbers(int n)
{
	int			dec;
	int			num;
	long int	n1;

	n1 = n;
	dec = 1;
	num = 0;
	if (n1 < 0)
	{
		n1 = -n1;
		num++;
	}
	while (n1 / dec > 9)
	{
		dec = dec * 10;
		num++;
	}
	if (n == -2147483648)
		num--;
	return (num + 1);
}

int	check_min(char *str, int n, int len)
{
	if (n == -2147483648)
	{
		str[len] = '8';
		n = -214748364;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = num_numbers(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	n = check_min(str, n, len);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	len--;
	if (n == 0)
		str[len] = '0';
	while (n != 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	char	*s;
	int		k;

	k = -2147483648;
	s = ft_itoa(k);
	printf("%d\n", num_numbers(k));
	printf("Sol: %s\n", s);
	free(s);
	return (0);
}
*/