/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:29:39 by lucifern          #+#    #+#             */
/*   Updated: 2023/02/23 15:11:41 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	leaks(void)
{
	system ("leaks a.out");
}

int	main(void)
{
	char	*line;
	int		fd;
	int		fd1;
	int		i;

	atexit(leaks);
	fd = open("text", O_RDONLY);
	fd1 = open("41_with_nl", O_RDONLY);
	i = 0;
	while (i <= 5)
	{
	
	line = get_next_line(fd);
	printf("contentfd %s\n", line);
	free(line);

	
	line = get_next_line(fd1);
	printf("content %s\n", line);
	/*
	line = get_next_line(fd1);
	printf("content %s\n", line);
	line = get_next_line(fd);
	printf("contentfd %s\n", line);
	line = get_next_line(fd1);
	printf("content %s\n", line);
	line = get_next_line(fd);
	printf("contentfd %s\n", line);
	line = get_next_line(fd1);
	printf("content %s\n", line);*/
	free(line);
	i++;
	}
}
