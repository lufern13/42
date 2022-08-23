/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:16:28 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/23 15:34:18 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <fcntl.h>

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
				free(line);
				return (NULL);
			}
		}
		i = 0;
		while (reading[i] && reading[i] != '\n')
		{
			ft_strlcat(line, &reading[i], ft_strlen(line) + 1);
			i++;
		}
		if (reading[i] == '\n')
		{
			ft_strlcat(line, "\n", ft_strlen(line) + 1);
			rd = 0;
		}
		if (i == BUFFER_SIZE)
		{
			//free(reading);
			reading = NULL;
		}
		else
			reading = ft_sub_endstr(reading, i);
	}
	return (line);
}

int	main(void)
{
	int		fd;
	char	*s;

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
