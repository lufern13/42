/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:34:58 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/24 13:48:41 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
/*
	Busca la letra c dentro de la cadena *s
	Devuelve:
		un puntero a la posición de c o NULL
*/
{
	int	i;

	i = 0;
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	const char	*s = "hola que tal?";
	char		c;

	c = 'k';
	printf("ft:%s\norig:%s\n", ft_strchr(s, c), strchr(s, c));
	return (0);
}
*/