/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:22:06 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 13:36:49 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	sol;

	sol = 0;
	if (c >= 32 && c <= 126)
		sol = 1;
	return (sol);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isprint(32));
	printf("%d", isprint(32));
	return (0);
}
*/