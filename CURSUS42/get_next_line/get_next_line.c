/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:45:44 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/25 18:26:27 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			a;
	//int			i;
	char		*sol = NULL;
	char		*reading = NULL;

	a = read(fd, reading, BUFFER_SIZE);
	printf("%d", a);
	if (a == -1)
		return (NULL);
	else if (a == 0)
		return (sol);
	/*
	else if (a < BUFFER_SIZE)
		return (ft_strjoin_to_end(sol, reading));
	else
	{
		i = 0;
		while (i < a)
		{
			if (reading[i] == '\n')
				return (ft_strjoin_to_end(sol, reading));
			i++;
		}
		sol = ft_strjoin_to_end(sol, reading));
		return (ft_strjoin_to_end(sol, get_next_line(fd)));
	}
	*/
	return (reading);
}

#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	*s;

	fd = open("sintitulo.txt", O_RDONLY);
	s = get_next_line(fd);
	printf("%s\n", s);
	close(fd);
	free(s);
}
