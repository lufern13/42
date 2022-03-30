/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:30:48 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/30 16:45:11 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_numbers(int n)
{
	int	i;
	int	j;

	i = 10;
	j = 1;
	while (n / i != 0)
	{
		i = i * 10;
		j++;
	}
	return (j);
}
/*
char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = num_numbers(n);
	str = ft_calloc(len, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (i < len)
	{
		//str[i] = get_num(n, i) + '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
*/
int	main(void)
{
	printf("%d\n", num_numbers(123));
	return (0);
}
