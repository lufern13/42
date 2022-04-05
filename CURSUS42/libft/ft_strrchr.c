/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:48:16 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/05 21:22:59 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (*(s + i) != (char)c && i >= 0)
	{
		i--;
	}
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	*s = "bonjour";
	char	c;

	c = 's';
	printf("ft:%s\norig:%s\n", ft_strrchr(s, c), strrchr(s, c));
	return (0);
}
*/