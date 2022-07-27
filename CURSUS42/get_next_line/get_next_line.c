/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:45:44 by lucifern          #+#    #+#             */
/*   Updated: 2022/07/27 20:15:53 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <fcntl.h>

char	*ft_strjoin_to_end(char const *s1, char const *s2)
{
	int		len1;
	int		len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len1 = 0;
	while (s1[len1])
		len1++;
	len = 0;
	while (s2[len])
		len++;
	len += len1;
	join = malloc((len + 1) * sizeof(char));
	if ((len + 1) == 0)
		return (join);
	if (join == NULL)
		return (NULL);
	ft_memset(join, '\0', (len + 1) * sizeof(char));
	ft_strlcat(join, s1, len1 + 1);
	ft_strlcat(join, s2, len + 1);
	return (join);
}

char	*get_next_line(int fd)
{
	static char	*mem;
	char		*reading;
	int			i;

	if (fd < 0)
		return (NULL);
	reading = ft_calloc(BUFFER_SIZE, sizeof(char));
	i = read(fd, reading, BUFFER_SIZE);
	if (i < 0 || reading[0] == '\0')
	{
		free(reading);
		return (NULL);
	}
	if (mem == NULL)
		mem = ft_calloc(1, sizeof(char));
	i = 0;
	while (reading[i] && reading[i] != '\n')
		i++;
	if (i == BUFFER_SIZE)
	{
		mem = ft_strjoin_to_end(mem, reading);
		//ft_strlcat(mem, reading, ft_strlen(mem) + BUFFER_SIZE);
		free(reading);
		get_next_line(fd);
	}
	else
	{
		if (i > 0)
			i--;
		mem = ft_strjoin_to_end(mem, ft_sub_inistr(reading, i));
		free(reading);
	}
	return (mem);
}

void	leaks(void)
{
	system ("leaks a.out");
}

int	main(void)
{
	int		fd;
	char	*s;

	atexit(leaks);
	fd = open("41_with_nl", O_RDONLY);
	s = get_next_line(fd);
	printf("LINE: %s\n", s);
	close(fd);
	free(s);
}
