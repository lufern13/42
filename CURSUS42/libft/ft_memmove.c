/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:29:12 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/05 21:21:20 by lucifern         ###   ########.fr       */
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
int	main(void)
{
	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	int size = strlen(src);
	char *r1 = __builtin___memmove_chk (dst1, src,
	 size, __builtin_object_size (dst1, 0));
	char *r2 = ft_memmove(dst1, src, size);

	//printf("%p  %p\n", r1, r2);
	if (r1 != r2)
		printf("M");
	r1 = __builtin___memmove_chk ("", "" - 1, 0, __builtin_object_size ("", 0));
	r2 = ft_memmove("", "" - 1, 0);
	if (r1 != r2)
		printf("M");
	printf("B");
}
*/