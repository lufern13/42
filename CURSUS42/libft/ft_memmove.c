/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:29:12 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/24 13:33:30 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t n)
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
		i++;
	}
	i = 0;
	while (i < 5)
	{
		b[i] = 97 + i;
		i++;
	}
	a[15] = '\0';
	b[5] = '\0';

	a[0] = 's';
	a[1] = 't';
	a[2] = 'a';
	a[3] = 'c';
	a[4] = 'k';
	a[5] = 'o';
	a[6] = 'v';
	a[7] = 'e';
	a[8] = 'r';
	a[9] = 'f';
	a[10] = 'l';
	a[11] = 'o';
	a[12] = 'w';
	a[13] = '\0';
	a1[0] = 's';
	a1[1] = 't';
	a1[2] = 'a';
	a1[3] = 'c';
	a1[4] = 'k';
	a1[5] = 'o';
	a1[6] = 'v';
	a1[7] = 'e';
	a1[8] = 'r';
	a1[9] = 'f';
	a1[10] = 'l';
	a1[11] = 'o';
	a1[12] = 'w';
	a1[13] = '\0';
	b[0] = 's';
	b[1] = 't';
	b[2] = 'a';
	b[3] = 'c';
	b[4] = 'k';
	b[5] = '\0';
	printf("%s\n", memcpy(a,b,7));           // valid
	printf("%s\n", memmove(a1,b,7));          // Also valid, but slower than memcpy.

	//printf("%s\n", memcpy(a,b,7));
	//printf("%s\n", memmove(a1,b,7));
	printf("%s\n", memcpy(a, b, 10));  // Not valid since it overlaps.
	printf("%s\n", memmove(a, b, 10)); // valid.
}
*/