/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:33:16 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/19 14:43:25 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*sol;
	int		ilen;

	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	sol = (char *)haystack;
	if (*needle == '\0')
		return (sol);
	ilen = (int)len;
	if ((int)len < 0)
		ilen = ft_strlen(haystack) - (int)len;
	i = 0;
	while (sol[i] && i < ilen)
	{
		j = 0;
		while (needle[j] && sol[i + j] && needle[j] == sol[i + j]
			&& i + j < ilen)
			j++;
		if (j == (int)ft_strlen(needle))
			return (sol + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	haystack[30] = "oh no not the empty string !";
// 	//char	needle[10] = "aabc";
// 	//char	*empty = (char *)"";

// 	printf("%s\n%s\n", ft_strnstr(haystack, "", 0),
// 		strnstr(haystack, "", 0));
// 	//system("leaks a.out");
// 	return (0);
// }
