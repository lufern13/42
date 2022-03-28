/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:33:16 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/28 19:02:38 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*sol;

	sol = (char *)haystack;
	if (*needle == '\0')
		return (sol);
	i = 0;
	while (sol[i] != '\0' && i < (int)len)
	{
		j = 0;
		while (needle[j] == sol[i + j] && needle[j] && sol[i + j]
			&& i + j < (int)len)
			j++;
		if (j == (int)ft_strlen(needle))
			return (sol + i);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	const char	*haystack = "MZIRIBMZIRIBMZE123";
	const char	*needle = "MZIRIBMZE";
	int			k;

	k = 9;
	printf("k:%d\n%s\n%s\n", k, ft_strnstr(haystack, needle, k), 
		strnstr(haystack, needle, k));
	return (0);
}
*/