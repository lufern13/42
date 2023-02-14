/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:29:39 by lucifern          #+#    #+#             */
/*   Updated: 2023/02/14 14:07:55 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*s;

	fd = open("41_with_nl", O_RDONLY);
	s = get_next_line(fd);
	printf("LINE1:%s.\n", s);
	free(s);
	s = get_next_line(fd);
	printf("LINE2:%s.\n", s);
	free(s);
	//s = get_next_line(fd);
	//free(s);
	//s = get_next_line(fd);
	//printf("LINE4:%s.\n", s);
	//free(s);
	//s = get_next_line(fd);
	//printf("LINE5:%s.\n", s);
	//free(s);
	close(fd);
	s = get_next_line(fd);
	printf("LINE6:%s.\n", s);
	free(s);
	system ("leaks a.out");
}
