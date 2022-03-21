/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:19:32 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 12:52:21 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	sol;

	sol = 0;
	if (c >= 'A' && c <= 'Z')
		sol = 1;
	else if (c >= 'a' && c <= 'z')
		sol = 1;
	return (sol);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalpha(123));
	printf("%d", isalpha(123));
	return (0);
}*/
