/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:05:24 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/28 18:41:46 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size < 1)
		return (srclen);
	destlen = ft_strlen(dest);
	if (size < destlen)
		return (size + srclen);
	j = 0;
	while ((j < size - destlen - 1) && src[j] != '\0')
	{
		dest[destlen + j] = src[j];
		j++;
	}
	if (size != 0 || destlen <= size)
		dest[destlen + j] = '\0';
	return (destlen + srclen);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char	buff1[0xF00] = "there is no stars in the sky";
	char	buff2[0xF00] = "there is no stars in the sky";
	size_t	max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t	n1;
	size_t	n2;

	n1 = strlcat(buff1, str, max);
	n2 = ft_strlcat(buff2, str, max);
	printf("%zu, %s\n", n1, buff1);
	printf("%zu, %s\n", n2, buff2);
	return (0);
}
*/