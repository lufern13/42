/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:29:39 by lucifern          #+#    #+#             */
/*   Updated: 2023/02/07 13:49:42 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	main(void)
{
	char	*line;
	int		fd;
	int		fd1;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("content %s\n", line);

	fd1 = open("41_with_nl.txt", O_RDONLY);
	line = get_next_line(fd1);
	printf("content %s\n", line);
	line = get_next_line(fd1);
	printf("content %s\n", line);
	line = get_next_line(fd1);
	printf("content %s\n", line);
	line = get_next_line(fd1);
	printf("content %s\n", line);
	line = get_next_line(fd);
	printf("content %s\n", line);
	line = get_next_line(fd1);
	printf("content %s\n", line);
}