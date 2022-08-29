/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:36:20 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/29 20:02:09 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	if (size >= SIZE_MAX)
		return (NULL);
	str = malloc(size * count);
	if (count == 0 || size == 0)
		return (str);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size < 1)
		return (srclen);
	destlen = 0;
	while (dest[destlen])
		destlen++;
	if (size <= destlen)
		return (size + srclen);
	j = 0;
	while (src[j] && (j < size - destlen - 1))
	{
		dest[destlen + j] = src[j];
		j++;
	}
	dest[destlen + j] = '\0';
	return (destlen + srclen);
}
////////////////////////////////////////

char	*ft_strjoin(char *s1, char *s2)
/*
	Une las cadenas s1 y s2 en una nueva cadena join.
	Devuelve:
		join
*/
{
	size_t	len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(len + 1, sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcat(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join, s2, len + 1);
	free(s1);
	return (join);
}

char	*ft_strchr(char *s, int c)
/*
	Busca la letra c dentro de la cadena *s
	Devuelve:
		un puntero a la posición de c o NULL
*/
{
	int	i;

	i = 0;
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

int	ft_position_char(char *s, char c)
/*
	devulevo la posicion de la primera aparicion de c en s
*/
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

/*
char	*ft_sub_inistr(char *s, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	free(s);
	return (str);
}
*/