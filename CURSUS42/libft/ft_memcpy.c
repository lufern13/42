/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:19:29 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/28 11:11:23 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;

	if (((char *)dest) == NULL && ((char *)src) == '\0')
		n = 0;
	i = 0;
	while (i < n && (((char *)dest)[i] || ((char *)src)[i]))
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
	char	a[16];
	char	a1[16];
	char	b[16];
	int		i;

	i = 0;
	while (i < 15)
	{
		a[i] = 65 + i;
		a1[i] = 65 + i;
		b[i] = 97 + i;
		i++;
	}
	a[15] = '\0';
	a1[15] = '\0';
	printf("%s\n", ft_memcpy(NULL, NULL, 2));
	printf("%s\n", memcpy(NULL, NULL, 2));
	printf("%s\n", ft_memcpy(a, b, 2));
	printf("%s\n", memcpy(a, b, 2));
	//printf("%s\n", memcpy(&a1[5], &a1[3],10));
	//printf("%s\n", ft_memcpy(&a[5], &a[3],10));
}
*/