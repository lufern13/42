/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:45:44 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/24 13:19:27 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <fcntl.h>
/*
char	*ft_strjoin_to_end(char *s1, char *s2)
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
	free(s1);
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
		free(reading);
		get_next_line(fd);
	}
	else
	{
		if (reading[0] == '\n')
			mem = ft_strjoin_to_end(mem, "\n");
		else
		{
			reading = ft_sub_inistr(reading, i);
			mem = ft_strjoin_to_end(mem, reading);
		}
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

	//atexit(leaks);
	fd = open("41_with_nl", O_RDONLY);
	s = get_next_line(fd);
	printf("LINE:%s", s);
	s = get_next_line(fd);
	printf("LINE:%s", s);
	close(fd);
	free(s);
}

*/

char	*ft_sub_endstr(char *s, int ini)
{
	int	i;

	i = 0;
	while (i < ini)
	{
		s++;
		i++;
	}
	return (s);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*reading;
	char		*line;
	int			rd;
	int			i;

	if (BUFFER_SIZE < 1)
		return (NULL);
	line = ft_calloc(1, sizeof(char));
	rd = BUFFER_SIZE;
	while (rd == BUFFER_SIZE)
	{
		if (reading == NULL)
		{
			reading = ft_calloc(BUFFER_SIZE, sizeof(char));
			rd = read(fd, reading, BUFFER_SIZE);
			if (rd < 0)
			{
				free(reading);
				reading = NULL;
				free(line);
				line = NULL;
				return (NULL);
			}
		}
		i = 0;
		while (reading[i] && reading[i] != '\n')
		{
			ft_strlcat(line, &reading[i], ft_strlen(line) + 2);
			i++;
		}
		if (reading[i] == '\n')
		{
			ft_strlcat(line, "\n", ft_strlen(line) + 2);
			rd = 0;
		}
		if (reading[i] == '\0' && i < BUFFER_SIZE)
		{
			free(reading);
			rd = 0;
		}
		if (i == BUFFER_SIZE)
		{
			free(reading);
			reading = NULL;
		}
		else
			reading = ft_sub_endstr(reading, i + 1);
	}
	if (line[0] == '\0')
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	return (line);
}
/*
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
	printf("LINE1:%s", s);
	free(s);
	s = get_next_line(fd);
	printf("LINE2:%s", s);
	free(s);
	s = get_next_line(fd);
	printf("LINE3:%s", s);
	free(s);
	close(fd);
}
*/