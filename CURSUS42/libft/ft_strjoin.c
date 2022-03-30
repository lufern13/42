/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:29:49 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/29 15:27:07 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	//size_t	i;
	//size_t	j;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(len + 1, sizeof(char));
	if (join == NULL)
		return (NULL);
	ft_strlcat(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join, s2, len + 1);
	/*i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len)
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';*/
	return (join);
}
/*
int	main(void)
{
	char *s1 = "where is my ";
	char *s2 = "malloc ???";
	char *res = ft_strjoin(s2, s1);

	printf("%s\n", res);
	if (res == ((void *)0))
		printf("B");
	free(res);
	return(0);
}
*/