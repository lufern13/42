/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:16:43 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/21 14:38:57 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(char *s, int n);;;
{
	int	i;
	int	size;

	i = 0;
	size = n / sizeof(*s);
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
}

#include <stdio.h>
#include <strings.h>
int	main(void)
{
	//char	*s = "hola que";
	char	*s1 = "hola que";

	bzero(s1, 3);
	printf("%s\n", s1);
	//ft_bzero(s, 3);
	//printf("%s\n", s);
	return (0);
}
