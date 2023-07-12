/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:00:39 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/12 17:28:54 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
/*
	Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
	La substring empieza desde el índice’start’ y tiene una longitud máxima’len’
*/
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	const char		*s = "lorem ipsum dolor sit amet";
	unsigned int	start = 7;
	size_t			len = 0;
	char			*str;

	str = ft_substr(s, start, len);
	printf("%s", str);
	free(str);
	return (0);
}
*/