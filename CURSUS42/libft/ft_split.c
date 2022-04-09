/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:48:51 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/09 19:55:26 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(const char *s, char c)
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
	if (s[0] == '\0')
		num--;
	return (num + 1);
}

static int	wordlen(const char *s, char c, int start)
{
	int	len;

	len = start;
	while (s[len] && s[len] != c)
		len++;
	return (len - start);
}

static void	free_array(char **s, int size)
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
	int		i;
	int		w;

	if (!s)
		return (NULL);
	sol = ft_calloc(num_words(s, c) + 1, sizeof(char *));
	if (!sol)
		return (NULL);
	i = 0;
	w = 0;
	while (w < num_words(s, c))
	{
		while (s[i] == c)
			i++;
		sol[w] = ft_substr(s, i, wordlen(s, c, i));
		if (!sol[w])
		{
			free_array(sol, num_words(s, c));
			return (NULL);
		}
		i = i + wordlen(s, c, i) + 1;
		w++;
	}
	return (sol);
}
/*
int	main(void)
{
	char	*s = "";
	char	**sol = ft_split(s, 'z');
	int		nw = num_words(s, 'z');
	int		i;

	i = 0;
	while (i < nw)
	{
		printf("i: %d, %s\n", i, sol[i]);
		i++;
	}
	free_array(sol, nw);
	system("leaks a.out");
	return (0);
}*/
