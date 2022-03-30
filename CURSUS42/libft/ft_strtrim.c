/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:52:57 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/30 13:48:03 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		sal;
	int		start;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	sal = ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)s1[sal]) && s1[sal])
		sal--;
	start = 0;
	while (ft_strchr(set, (int)s1[start]) && s1[start])
		start++;
	if (sal < start)
		return (ft_strdup(""));
	str = ft_calloc(sal - start + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_substr(s1, start, sal - start + 1);
	return (str);
}
/*
#include <string.h>
int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\n \n   \n \n \t\t\n  ";
	char *s2 = "";
	char *ret = ft_strtrim(s1, " \n\t");

	printf("%s\n", ret);
	if (!strcmp(ret, s2))
		printf("EXITO");
	free(ret);
	return (0);
}
*/