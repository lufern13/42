/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:00:39 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/30 13:17:04 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL || len == 0)
		return (NULL);
	if (start > ft_strlen(s))
		return (str);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	const char		*s = "hola que tal?";
	unsigned int	start = 15;
	size_t			len = 6;
	char			*str;

	str = ft_substr(s, start, len);
	printf("%s", str);
	free(str);
	return (0);
}
*/