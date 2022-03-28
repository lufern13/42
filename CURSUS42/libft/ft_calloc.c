/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:28:26 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/28 19:01:54 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(size * count);
	if (count == 0 || size == 0)
		return (str);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}
/*
int	main(void)
{
	void	*ptr;
	void	*p;

	ptr = ft_calloc(0, 0);
	p = calloc(0, 0);
	if (ptr == ((void *)0))
		printf("MAL");
	else
		printf("BIEN");
	free(ptr);
	free(p);
	return (0);
}
*/