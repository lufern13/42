/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:36:20 by lucifern          #+#    #+#             */
/*   Updated: 2022/07/27 20:10:30 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*ft_sub_inistr(char const *s, size_t len)
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
	return (str);
}

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

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}