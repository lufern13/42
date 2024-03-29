/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:44:58 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/12 17:36:04 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
/*
	Toma una cadena de caracteres existente como argumento y devuelve un puntero
	a una nueva cadena que es una copia exacta de la cadena original.
*/
{
	int		len;
	int		i;
	char	*str;

	len = (int)ft_strlen(s1);
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
/*
#include <string.h>

int	main(void)
{
	const char	*s1 = "this is a normal test";
	char		*str;
	size_t		len;

	str = ft_strdup(s1);
	len = ft_strlen(s1);
	printf("%zu, %zu", len, ft_strlen(str));
	free(str);
	return (0);
}
*/