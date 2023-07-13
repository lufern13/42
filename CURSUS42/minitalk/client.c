/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/13 14:24:49 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char(int pid, int c)
/*
	Se envía al PID el carácter c pasándolo a binario y usando las señales
	SIGUR2 (1) y SIGUR1 (0).
	Parámetros: PID del servidor y char a enviar.
*/
{
	int	i;

	i = 7;
	printf("CLIENT SENDING CHAR\n");
	while (i >= 0)
	{
		if (c & (1 << i))
		{
			printf("C1\n");
			kill(pid, SIGUSR2);
			sleep(1);
		}
		else
		{
			printf("C0\n");
			kill(pid, SIGUSR1);
			sleep(1);
		}
		i--;
	}
}

int	main(int argc, char **argv)
/*
	El cliente debe comunicar la string pasada como parámetro al servidor.
	Parámetros: PID del servidor y string a enviar.
*/
{
	int	i;
	int	c;
	int	pid;

	i = 0;
	pid = atoi(argv[1]);
	while (argv[2][i])
	{
		c = argv[2][i];
		send_char(pid, c);
		i++;
	}
	i = argc;
	return (0);
}
