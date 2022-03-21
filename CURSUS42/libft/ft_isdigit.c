/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:52:51 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 13:06:21 by lucifern         ###   ########.fr       */
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
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isdigit('a'));
	printf("%d", isdigit('a'));
	return (0);
}
*/