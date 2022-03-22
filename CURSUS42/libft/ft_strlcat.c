/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:05:24 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/22 18:55:50 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libtf.h>
#include <stdio.h>

size_t	ft_strlen(char *str);

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	destlen = ft_strlen(dest);
	j = 0;
	while ((j < size - destlen - 1) && src[j] != '\0')
	{
		dest[destlen + j] = src[j];
		j++;
	}
	if (size != 0 || destlen <= size)
		dest[destlen + j] = '\0';
	if (size < destlen)
		return (destlen + size - 1);
	else
		return (destlen + srclen);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest1[100];
	char	src[5];
	char	dest[100];
	int		n;
	int		n1;
	int		k;

	k = 13;
	src[0] = '1';
	src[1] = '2';
	src[2] = '3';
	src[3] = '4';
	src[4] = '\0';
	dest1[0] = 'h';
	dest1[1] = 'o';
	dest1[2] = 'l';
	dest1[3] = 'a';
	dest1[4] = 's';
	dest1[5] = '\0';
	n1 = ft_strlcat(dest1, src, k);
	dest[0] = 'h';
	dest[1] = 'o';
	dest[2] = 'l';
	dest[3] = 'a';
	dest[4] = 's';
	dest[5] = '\0';
	n = strlcat(dest, src, k);
	printf("%d:%s\n", n, dest);
	printf("FT %d:%s\n",n1, dest1);
	return (0);
}*/
