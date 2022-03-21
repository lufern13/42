/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:07:01 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 13:12:41 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	sol;

	sol = 0;
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		sol = 1;
	return (sol);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalnum('*'));
	printf("%d", isalnum('*'));
	return (0);
}
*/