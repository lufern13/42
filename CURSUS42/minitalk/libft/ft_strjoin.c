/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:29:49 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/29 15:05:16 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
/*
	Reserva (con malloc(3)) y devuelve una nueva string, formada por la concate-
	nación de ’s1’ y ’s2’.
*/
{
	size_t	len;
	char	*join;

	if (!s1)
		s1 = NULL;
	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(len + 1, sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcat(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join, s2, len + 1);
	free(s1);
	free(s2);
	return (join);
}
// s1 = (null) len = 0
// s2 = "h" len = 1
// join = "\0\0"
// ft_strlcat("\0\0", (null), 1);
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