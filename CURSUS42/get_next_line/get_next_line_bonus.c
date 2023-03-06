/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:16:28 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/05 12:20:21 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*read_line(int fd, char **reading)
/*
	compruebo que en reading no haya \n; si los hay devuelvo el reading a partir
	del salto, si no los hay le voy anexando sucesivas lecturas hasta encontrar \n
*/
{
	char	*new_read;
	int		rd;

	rd = BUFFER_SIZE;
	if (!*reading)
		*reading = ft_calloc(1, 1);
	while (!ft_strchr(*reading, '\n') && rd == BUFFER_SIZE)
	{
		new_read = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		rd = read(fd, new_read, BUFFER_SIZE);
		if (rd < 1 && *reading[0] == '\0')
		{
			free(*reading);
			free(new_read);
			return (NULL);
		}
		if (rd == -1)
			reading = NULL;
		*reading = ft_strjoin(*reading, new_read);
	}
	return (*reading);
}

char	*get_the_line(char **reading, int i)
/*
	me quedo con la parte de reading hasta \n
*/
{
	char	*line;
	int		pos;
	char	*temp;

	line = NULL;
	if (!*reading)
	{
		free(*reading);
		free(line);
		return (NULL);
	}
	pos = ft_position_char(*reading, '\n');
	line = ft_calloc(pos + 2, sizeof(char));
	temp = *reading;
	while (temp[i] && temp[i] != '\n')
	{
		line[i] = temp[i];
		i += 1;
	}
	if (temp[i] == '\n')
		line[i] = temp[i];
	return (line);
}

char	*reset_reading(char **reading, int i)
/*
	me quedo con todo lo que hay despues de \n en reading
*/
{
	int		j;
	char	*mem;
	char	*temp;

	temp = *reading;
	j = ft_strlen(temp);
	mem = ft_calloc(1, j - i + 1);
	if (j <= i)
		free(temp);
	else
	{
		j = 0;
		i++;
		while (temp[i + j] != '\0')
		{
			mem[j] = temp[i + j];
			j++;
		}
		mem[j] = '\0';
		free(temp);
	}
	return (mem);
}

char	*get_next_line(int fd)
{
	static char	*reading[257];
	char		*line;
	int			i;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (NULL);
	reading[fd] = read_line(fd, &reading[fd]);
	i = 0;
	line = get_the_line(&reading[fd], i);
	if (!line)
	{
		free(reading[fd]);
		free(line);
		return (NULL);
	}
	i = ft_position_char(reading[fd], '\n');
	reading[fd] = reset_reading(&reading[fd], i);
	return (line);
}
