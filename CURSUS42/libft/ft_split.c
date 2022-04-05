/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:48:51 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/05 21:15:17 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	num_words(const char *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] == c)
	i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			num++;
		i++;
	}
	if (s[i - 1] == c)
		num--;
	return (num + 1);
}
*/
int	num_words(const char *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (i == 0 || s[i - 1] == c)
			num++;
		i++;
	}
	return (num);
}
int	wordlen(const char *s, char c, int start)
{
	int	len;

	len = start;
	while (s[len] && s[len] != c)
		len++;
	return (len - start);
}

void	free_array(char **s, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(const char *s, char c)
{
	char	**sol;
	int		words;
	int		len;
	int		i;
	int		w;

	if (!s)
		return (NULL);
	words = num_words(s, c);
	sol = malloc((words) * sizeof(char));
	if (sol == NULL)
		return (NULL);
	i = 0;
	w = 0;
	while (w < words)
	{
		while (s[i] == c)
			i++;
		len = wordlen(s, c, i);
		sol[w] = (char *)ft_calloc(len + 1, sizeof(char));
		if (sol[w] == NULL)
		{
			free_array(sol, words);
			return (NULL);
		}
		sol[w] = ft_substr(s, i, len);
		i = i + len + 1;
		w++;
	}
	return (sol);
}

#include <string.h>

int	main(void)
{
	char	*s = "      split       this for   me  !       ";
	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char	**sol = ft_split(s, ' ');
	int		i;

	i = 0;
	while (i < num_words(s, ' '))
	{
		printf("i: %d, %s\n", i, sol[i]);
		printf("%d\n", strcmp(expected[i], sol[i]));
		i++;
	}
	free_array(sol, num_words(s, ' '));
	return (0);
}
