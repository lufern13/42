/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:12:55 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 13:21:52 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	sol;

	sol = 0;
	if (c >= 0 && c <= 127)
		sol = 1;
	return (sol);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isascii(127));
	printf("%d", isascii(127));
	return (0);
}
*/