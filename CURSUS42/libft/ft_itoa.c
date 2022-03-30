/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:30:48 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/30 17:59:12 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_numbers(int n)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (n <= 0)
	{
		n = -n;
		j++;
	}
	while (n / i != 0)
	{
		i = i * 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = num_numbers(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	len--;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

int	main(void)
{
	char	*s = ft_itoa(-12598);

	printf("%d\n", num_numbers(0));
	printf("S: %s\n", s);
	free(s);
	return (0);
}
