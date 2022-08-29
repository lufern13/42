/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:16:28 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/29 20:49:54 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <fcntl.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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
			free(reading);
			return (NULL);
		}
		reading = ft_strjoin(reading, new_read);
		//printf("read:%s, new:%s\n", reading, new_read);
	}
	return (reading);
}

char	*get_line(char *reading, int *i)
/*
	me quedo con la parte de reading hasta \n
*/
{
	char	*line;

	if (!reading)
	{
		free(reading);
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
	//printf("1 READING:%s\n", reading);
	while (reading[i + j])
	{
		//printf("cambio %c por %c\n", reading[i], reading[i + j]);
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

char	*get_next_line(int fd)
{
	static char	*reading;
	char		*line;
	int			i;

	if (fd < 0)
	{
		free(reading);
		return (NULL);
	}
	if (BUFFER_SIZE < 1)
		return (NULL);
	reading = read_line(fd, reading);
	//printf("dir read:%p\n", reading);
	//printf("READ:%s\n", reading);
	i = 0;
	line = get_line(reading, &i);
	if (!line)
	{
		free(reading);
		free(line);
		return (NULL);
	}
	//printf("BB%i\n", i);
	//printf("LINE:%s\n", line);
	reading = reset_reading(reading, i);
	//printf("FINAL READING:%s\n", reading);
	printf("AAAAAAAAAAAAAAAAAAAAAAAdir read:%p\n", reading);
	return (line);
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
	s = get_next_line(-1);
	printf("LINE1:%s", s);
	free(s);
	s = get_next_line(fd);
	printf("LINE2:%s", s);
	//free(s);
	//s = get_next_line(fd);
	//printf("LINE3:%s", s);
	free(s);
	close(fd);
}
