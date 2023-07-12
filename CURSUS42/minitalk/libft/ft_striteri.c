/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:01:25 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/12 17:34:13 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_f2(unsigned int i, char *s)
{
	*s = *s + i;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
/*
	A cada carácter de la string ’s’, aplica la función ’f’ dando como paráme-
	tros el índice de cada carácter dentro de ’s’ y la dirección del propio 
	carácter, que podrá modificarse si es necesario.
*/
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[4];

	s[0] = '1';
	s[1] = '2';
	s[2] = '3';
	s[3] = '4';
	ft_striteri(s, ft_f2);
	printf("%s\n", s);
	return (0);
}
*/