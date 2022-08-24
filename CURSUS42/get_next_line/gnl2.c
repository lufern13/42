/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:16:28 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/24 13:56:08 by lucifern         ###   ########.fr       */
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
	//printf("subendstr:%s\n", s);
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
/*
	IDEA:
		reading = funcion leer(fd, reading)
			en esta funcion compruebo que en reading no haya \n; si los hay devuelvo
			el reading a partir del salto, si no los hay le voy anexando sucesivas
			lecturas hasta encontrar \n
		line = función linea (reading)
			me quedo con la parte de reading hasta \n
		reading = funcion conservar reading(reading)
			me quedo con todo lo que hay despues de \n en reading
*/
{
	static char	*reading;
	char		*line;

	reading = read_line(fd, reading);
	line = get_line(reading);
	reading = rest_static(reading);
	return (line);
}

char	*read_line(int fd, char *reading)
{
	char	*new_read;
	int		rd;

	rd = BUFFER_SIZE
	while (!strchr(reading, '\n') && rd == BUFFER_SIZE)
	{
		new_read = ft_calloc(BUFFER_SIZE, sizeof(char));
		rd = read(fd, new_read, BUFFER_SIZE);
		reading = ft_strjoin(reading, new_read);
	}
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
