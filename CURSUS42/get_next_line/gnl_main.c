/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:29:39 by lucifern          #+#    #+#             */
/*   Updated: 2022/09/25 18:50:51 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	//int		fd;
	//char	*s;
	char	*str;

	str = malloc(10);
	str = "0123456789";
	printf("%s\n", reset_reading(str, 3));
	//fd = open("41_with_nl", O_RDONLY);
	//s = get_next_line(fd);
	//printf("LINE1:%s\n\n\n", s);
	//free(s);
	//s = get_next_line(fd);
	//printf("LINE2:%s\n\n\n", s);
	////free(s);
	////s = get_next_line(fd);
	////printf("LINE3:%s", s);
	//free(s);
	////system ("leaks a.out");
	//close(fd);
}
