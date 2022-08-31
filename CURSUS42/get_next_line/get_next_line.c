/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:16:28 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/31 13:33:01 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <fcntl.h>

char	*read_line(int fd, char *reading)
/*
	compruebo que en reading no haya \n; si los hay devuelvo el reading a partir
	del salto, si no los hay le voy anexando sucesivas lecturas hasta encontrar \n
*/
{
	char	*new_read;
	int		rd;

	rd = BUFFER_SIZE;
	if (!reading)
		reading = ft_calloc(1, 1);
	while (!ft_strchr(reading, '\n') && rd == BUFFER_SIZE)
	{
		new_read = ft_calloc(BUFFER_SIZE, sizeof(char));
		rd = read(fd, new_read, BUFFER_SIZE);
		if (rd < 1)
		{
			ft_free_alloc(reading, 0);
			return (NULL);
		}
		reading = ft_strjoin(reading, new_read);
	}
	return (reading);
}

char	*get_line(char *reading, int *i)
/*
	me quedo con la parte de reading hasta \n
*/
{
	char	*line;

	line = NULL;
	if (!reading)
	{
		ft_free_alloc(reading, line);
		return (NULL);
	}
	line = ft_calloc(ft_position_char(reading, '\n') + 1, sizeof(char));
	while (reading[*i] && reading[*i] != '\n')
	{
		line[*i] = reading[*i];
		*i += 1;
	}
	return (line);
}

char	*reset_reading(char *reading, int i)
/*
	me quedo con todo lo que hay despues de \n en reading
*/
{
	int	j;

	j = 0;
	i++;
	while (reading[i + j])
	{
		reading[i] = reading[i + j];
		j++;
	}
	while (reading[j])
	{
		reading[j] = '\0';
		j++;
	}
	return (reading);
}

void	ft_free_alloc(char *s1, char *s2)
{
	if (s1)
	{
		free(s1);
		s1 = NULL;
	}
	else
		free(s1);
	if (s2)
	{
		free(s2);
		s2 = NULL;
	}
	else
		free(s2);
}

char	*get_next_line(int fd)
{
	static char	*reading;
	char		*line;
	int			i;

	if (fd <= 0 || BUFFER_SIZE < 1 || fd > 1024)
	{
		ft_free_alloc(reading, 0);
		return (NULL);
	}
	reading = read_line(fd, reading);
	i = 0;
	line = get_line(reading, &i);
	//printf("%s, %s\n", reading, line);
	if (!line)
	{
		ft_free_alloc(reading, line);
		return (NULL);
	}
	reading = reset_reading(reading, ft_position_char(reading, '\n'));
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
	//free(s);
	//s = get_next_line(fd);
	//printf("LINE2:%s", s);
	//free(s);
	//s = get_next_line(fd);
	//printf("LINE3:%s", s);
	free(s);
	close(fd);
}
*/