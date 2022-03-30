/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:29:12 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/30 11:57:05 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		i = n - 1;
		while (i > 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
		((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}
/*
#include <string.h>

int	main(void)
{
	char	*src = "thanks to @apellicc for this test !\r\n";
	char	dst1[0xF0];
	int		k;
	char	*r1;
	//char	*r2;

	k = ft_strlen(src);
	//printf("%p, ", dst1);
	r1 = ft_memmove("", "" - 1, 0);
	printf("%p, %s\n", r1, r1);
	//r2 = memmove(b, a, k);
	//printf("%p, %s\n", r2, r2);
}
*/