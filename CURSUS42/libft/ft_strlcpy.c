/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:40:25 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/28 19:02:29 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (size < 1)
		return (srclen);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[0xF0];
	//char	dest1[0];
	char	src[5];
	int		n;
	//int		n1;

	src[0] = '1';
	src[1] = '2';
	src[2] = '3';
	src[3] = '4';
	src[4] = '\0';
	dest[0] = 'h';
	dest[1] = 'o';
	dest[2] = 'l';
	dest[3] = 'a';
	dest[4] = 's';
	dest[5] = '\0';
	dest1[0] = 'h';
	dest1[1] = 'o';
	dest1[2] = 'l';
	dest1[3] = 'a';
	dest1[4] = 's';
	dest1[5] = '\0';
	n = ft_strlcpy(dest, src, 2);
	//n = strlcpy(dest1, src, 2);
	printf("FT %d: %s\n", n, dest);
	return (0);
}
*/