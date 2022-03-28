/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:29:49 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/28 19:52:45 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*join;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (len == 0)
		len++;
	else if (ft_strlen(s1) != 0 && ft_strlen(s2) != 0)
		len = len - 1;
	join = malloc(len * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
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
	join[i + j] = '\0';
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