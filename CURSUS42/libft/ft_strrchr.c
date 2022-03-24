/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:48:16 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/24 13:51:34 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *str);

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (*(s + i) == c)
			return (s + i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	*s = "hola que talq?";
	
	printf("%s\n", ft_strrchr(s, '0'));
	return (0);
}*/