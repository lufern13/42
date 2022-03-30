/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:48:51 by lucifern          #+#    #+#             */
/*   Updated: 2022/03/30 16:08:02 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	sol = ft_calloc(words, sizeof(char));
	if (sol == NULL)
		return (NULL);
	i = 0;
	w = 0;
	while (w < words)
	{
		while (s[i] == c)
			i++;
		len = wordlen(s, c, i);
		sol[w] = (char *)ft_calloc(len, sizeof(char));
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

int	main(void)
{
	const char	*s = "      split       this for   me  !       ";
	char		c = ' ';
	char		**sol = ft_split(s, c);
	int			i;

	i = 0;
	while (i < num_words(s, c))
	{
		printf("i: %d, %s\n", i, sol[i]);
		i++;
	}
	free_array(sol, num_words(s, c));
	return (0);
}
