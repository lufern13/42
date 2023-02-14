/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:30:48 by lucifern          #+#    #+#             */
/*   Updated: 2023/02/07 13:21:25 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_numbers(int n)
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
	return (num + 1);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	m;

	len = num_numbers(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	m = n;
	if (m < 0)
	{
		str[0] = '-';
		m = -m;
	}
	len--;
	if (m == 0)
		str[len] = '0';
	while (m != 0)
	{
		str[len] = (m % 10) + '0';
		m = m / 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	char	*res = ft_itoa(-2147483648LL);

	printf("%s", res);
	free(res);
	return (0);
}
*/