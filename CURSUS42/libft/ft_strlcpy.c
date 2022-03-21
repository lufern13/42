/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:40:25 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 15:04:23 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcpy(char *dest, char *src, int size)
{
	int	srclen;
	int	i;

	srclen = ft_strlen(src);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	if (srclen > size)
		return (srclen);
	else
		return (srclen);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[6];
	char	dest1[6];
	char	src[5];
	int		n;
	int		n1;

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
	n = ft_strlcpy(dest, src, 0);
	n1 = strlcpy(dest1, src, 0);
	printf("FT %d: %s\n%d: %s", n, dest, n1, dest1);
	return (0);
}
*/