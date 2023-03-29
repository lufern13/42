/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:52:14 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/26 17:39:06 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		sol;

	i = 0;
	sol = 0;
	while (sol == 0 && i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			sol = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (sol);
}
/*
#include <string.h>

int	main(void)
{
	const char s1[] = "atoms\0\0\0\0";
	const char s2[] = "atoms\0abc";
	const char s3[] = "atomsaaa";

	printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("%d\n", strncmp(s1, s2, 8));
	printf("%d\n", ft_strncmp(s1, s3, 8));
	printf("%d\n", strncmp(s1, s3, 8));
	return (0);
}*/
