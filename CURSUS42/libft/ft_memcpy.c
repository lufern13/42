/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:19:29 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/24 13:29:50 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*destchar;
	char	*srcchar;
	size_t	i;

	destchar = (char *)dest;
	srcchar = (char *)src;
	i = 0;
	while (i < n)
	{
		destchar[i] = srcchar[i];
		printf("%zu: %c\n", i, srcchar[i]);
		i++;
	}
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
	char a[16]; //mayus
	char a1[16];
	char b[6];
	int i;

	i = 0;
	while (i < 15)
	{
		a[i] = 65 + i;
		a1[i] = 65 + i;
		b[i] = 97 + i;
		i++;
	}
	//printf("%s\n", ft_memcpy(a, b, 5));
	//printf("%s\n", memcpy(a, b, 5));
	printf("%s\n", memcpy(&a1[0], &a1[1],10));  // Not valid since it overlaps.
	printf("%s\n", ft_memcpy(&a[0], &a[1],10));
}*/
