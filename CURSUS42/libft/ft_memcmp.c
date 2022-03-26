/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:38:16 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/26 15:56:30 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		sol;
	size_t	i;

	i = 0;
	sol = 0;
	while (sol == 0 && i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			sol = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		i++;
	}
	return (sol);
}

#include <string.h>

int	main(void)
{
	const char s1[] = "abtoms\0adc\0\0\0";
	const char s2[] = "adtoms\0abc";
	const char s3[] = "atomsaaa";

	printf("%d\n", ft_memcmp(s1, s2, 8));
	printf("%d\n", memcmp(s1, s2, 8));
	printf("%d\n", ft_memcmp(s3, s1, 8));
	printf("%d\n", memcmp(s3, s1, 8));
	return (0);
}