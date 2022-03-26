/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:29:12 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/26 17:38:48 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n);

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;

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
int main(void)
{
	char a[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};

	printf("%s\n", a);
	printf("After memmove()\n");
	ft_memmove(&a[5], &a[3], 5);
	printf("%s\n", a);
}*/