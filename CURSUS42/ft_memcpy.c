/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:19:29 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/22 21:25:58 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memcpy(void *dest, void *src, size_t n)
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

int	main(void)
{
	
}