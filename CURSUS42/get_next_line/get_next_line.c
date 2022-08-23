/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:45:44 by lucifern          #+#    #+#             */
/*   Updated: 2022/08/23 15:13:37 by lucifern         ###   ########.fr       */
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

//PONER READING COMO ESTÁTICA PARA QUE NO MACHAQUE LO QUE SOBRA DE READING
char	*get_next_line(int fd)
{
	char		*line;
	static char	*reading;
	int			i;
	int			rd;

	if (fd < 0)
		return (NULL);
	line = ft_calloc(1, sizeof(char));
	rd = BUFFER_SIZE;
	printf("line: %s, reading:%s\n\n", line, reading);
	while (rd == BUFFER_SIZE)
	{	
		if (reading == NULL)
		{
			reading = ft_calloc(BUFFER_SIZE, sizeof(char));
			rd = read(fd, reading, BUFFER_SIZE);
			if (rd < 0)
			{
				free(reading);
				return (NULL);
			}
			if (rd < BUFFER_SIZE || (rd == BUFFER_SIZE && reading[rd - 1] == '\n'))
				rd = 0;
		}
		i = 0;
		printf("C:%s\n", reading);
		while (reading[i] && reading[i] != '\n')
		{
			ft_strlcat(line, &reading[i], ft_strlen(line) + 2);
			i++;
		}
		if (reading[i] == '\n')
			ft_strlcat(line, "\n", ft_strlen(line) + 2);
		if (reading[i] == '\0')
			return (line);
		if (i == BUFFER_SIZE)
			reading = NULL;
		else
			reading = ft_sub_endstr(reading, i);
	}
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

	//atexit(leaks);
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
