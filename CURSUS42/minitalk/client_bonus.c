/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/07/29 15:03:23 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	received;

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
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		sleep(1);
		i--;
	}
}

void	received_reception(int signal)
{
	if (signal == SIGUSR1)
		received = 1;
}

int	main(int argc, char **argv)
/*
	El cliente debe comunicar la string pasada como parámetro al servidor.
	Parámetros: PID del servidor y string a enviar.
*/
{
	int	i;
	int	j;
	int	pid;

	received = 0;
	pid = ft_atoi(argv[1]);
	j = 2;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			send_char(pid, argv[j][i]);
			i++;
		}
		if (j + 1 < argc)
			send_char(pid, ' ');
		j++;
	}
	send_char(pid, '\0');
	while (!received)
		signal(SIGUSR1, received_reception);
	if (received)
		ft_putstr_fd("Message received.\n", 1);
	return (0);
}
