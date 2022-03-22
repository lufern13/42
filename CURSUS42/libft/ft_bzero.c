/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:16:43 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/22 19:17:55 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	//char	*s = "hola que";
	//char	*s1 = "hola que";
	char	src[5];
	char	src1[5];

	src[0] = '1';
	src[1] = '2';
	src[2] = '3';
	src[3] = '4';
	src[4] = '\0';
	src1[0] = '1';
	src1[1] = '2';
	src1[2] = '3';
	src1[3] = '4';
	src1[4] = '\0';
	bzero(src, 1);
	printf("%s\n", src);
	ft_bzero(src1, 2);
	printf("%s\n", src1);
	return (0);
}*/
