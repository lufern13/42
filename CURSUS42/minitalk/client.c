/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/25 13:22:31 by lucifern         ###   ########.fr       */
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
	while (i >= 0)
	{
		if (c & (1 << i))
		{
			kill(pid, SIGUSR2);
			usleep(2500);
		}
		else
		{
			kill(pid, SIGUSR1);
			usleep(2500);
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
	int	j;
	int	c;
	int	pid;

	pid = atoi(argv[1]);
	j = 2;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			c = argv[j][i];
			send_char(pid, c);
			i++;
		}
		if (j + 1 < argc)
			send_char(pid, ' ');
		j++;
	}
	return (0);
}
