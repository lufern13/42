/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:01:39 by lucifern          #+#    #+#             */
/*   Updated: 2022/11/05 18:35:29 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

//								IDEA NUEVA:
//
//Ahora en mi variable estática solo guardaré lo leído que quiero almacenar
//para la siguiente ejecución.
//
//Es decir, en reading voy guardando todos los new_read hasta que encuentre un
//salto de línea, una vez encontrado copio todo lo que hay después a store (la
//variable estática).
//
//Cojo la parte que me interesa de reading para formar la línea y luego lo 
//libero, pues ya tengo en store lo que necesito guardar.

void	copy_store(char *reading, int sl, char *stored)
{
	int	i;

	i = 0;
	while (reading[sl + i])
	{
		stored[i] = reading[sl + i];
		i++;
	}
	return (stored);
}

char	*read_line(int fd, char *reading, char *stored)
/*
	Compruebo que en reading no haya \n; si los hay devuelvo el reading a partir
	del salto, si no los hay le voy anexando sucesivas lecturas hasta encontrar \n.
*/
{
	char	*new_read;
	int		rd;

	rd = BUFFER_SIZE;
	if (!reading)
		reading = ft_calloc(1, 1);
	while (!ft_strchr(reading, '\n') && !ft_strchr(stored, '\n')\
		 && rd == BUFFER_SIZE)
	{
		new_read = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		rd = read(fd, new_read, BUFFER_SIZE);
		if (rd < 1 && reading[0] == '\0')
		{
			ft_free_alloc(reading, new_read);
			return (NULL);
		}
		reading = ft_strjoin(reading, new_read);
	}
	if (ft_strchr(reading, '\n'))
	{
		rd = 0;
		while (reading[rd] != '\n')
			rd++;
		copy_store(reading, rd + 1, stored);
	}
	return (reading);
}

char	*get_line(char *reading, int *i)
/*
	Me quedo con la parte de reading hasta \n.
*/
{
	char	*line;
	int		pos;

	line = NULL;
	if (!reading)
	{
		ft_free_alloc(reading, line);
		return (NULL);
	}
	pos = ft_position_char(reading, '\n');
	line = ft_calloc(pos + 1, sizeof(char));
	line[pos + 1] = '\0';
	while (reading[*i] && reading[*i] != '\n')
	{
		line[*i] = reading[*i];
		*i += 1;
	}
	if (reading[*i] == '\n')
		line[*i] = reading[*i];
	return (line);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*reset_reading(char *reading, int i)
/*
	me quedo con todo lo que hay despues de \n en reading
*/
{
	int	j;

	//printf("position salto:%i\n", i);
	printf("%p\n", reading);
	if (ft_strlen(reading) <= i)
		reading = NULL;
	else
	{
		j = 0;
		i++;
		//printf("i:%i, reading[i]:%i\n", i, reading[i]);
		//printf("reading i+j:%i\n", reading[i + j]);
		while (reading[i + j] != '\0')
		{
			//printf("reading: %s\n", reading);
			//printf("cambio %i por %i\n", reading[j], reading[i + j]);
			reading[j] = reading[i + j];
			j++;
			//printf("reading i+j:%i\n", reading[i + j]);
		}
		//printf("j:%i\n", j);
		while (reading[j])
		{
			reading[j] = '\0';
			j++;
		}
	}
	//printf("reset reading: %s\n", reading);
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
	static char	stored[BUFFER_SIZE + 1];
	char		*reading;
	char		*line;
	int			i;

	reading = ft_calloc(BUFFER_SIZE + 1, 1);
	if (stored)
		copy_store(stored, 0, reading);
	//copio stored desde 0 a reading
	//printf("reading0: %s\n", reading);
	if (fd < 0 || BUFFER_SIZE < 1 || fd > 1024)
	{
		ft_free_alloc(reading, 0);
		return (NULL);
	}
	reading = read_line(fd, reading);
	i = 0;
	line = get_line(reading, &i);
	if (!line)
	{
		ft_free_alloc(reading, line);
		return (NULL);
	}
	//printf("reading1: %s\n", reading);
	reading = reset_reading(reading, ft_position_char(reading, '\n'));
	//printf("reading2: %s\n", reading);
	return (line);
}
