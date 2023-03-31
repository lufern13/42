/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:30 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/31 21:02:42 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/libft.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

char	*g_num;

void	handler_sigusr1(void)
{
	*g_num = '1';
	g_num++;
	printf("NUM1: %s\n", g_num - 1);
}

void	handler_sigusr2(void)
{
	*g_num = '0';
	g_num++;
	printf("NUM0: %s\n", g_num - 1);
}

int	main(void)
/*
	El servidor debe lanzarse primero, tras lanzarse debe mostrar su PID.
	Una vez la string se haya recibido, el servidor debe mostrarla.
	Parámetros: string que mostrar.
*/
{
	signal(SIGUSR1, handler_sigusr1);
	signal(SIGUSR2, handler_sigusr2);
	printf("pid: %i\n", getpid());
	g_num = malloc(8);
	while (1)
	{
		printf("HOLA: %s\n", g_num - 7);
		sleep(1);
	}
	return (0);
}

//http://www.lsi.us.es/cursos/seminario-1.html#11