/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:36:42 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/12 17:32:46 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_f(unsigned int i, char c)
{
	return (c + i);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
/*
	A cada carácter de la string ’s’, aplica la función ’f’ dando como paráme-
	tros el índice de cada carácter dentro de ’s’ y el propio carácter. Genera
	una nueva string con el resultado del uso sucesivo de ’f’.
*/
{
	char	*str;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*s = "1234";
	char	*sol = ft_strmapi(s, ft_f);

	printf("%s\n", sol);
	free(sol);
	return (0);
}
*/