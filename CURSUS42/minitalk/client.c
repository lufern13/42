/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/11/04 21:42:04 by lucifern         ###   ########.fr       */
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
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(300);
		i--;
	}
}

int	main(int argc, char **argv)
/*
	El cliente debe comunicar la string pasada como parámetro al servidor.
	Parámetros: PID del servidor y string a enviar.
*/
{ revisar que está con solo 3 argumentos 

	int	i;
	int	pid;

	if (argc != 3)
		ft_putstr_fd("Wrong number of arguments\n", 1);
	else
	{
		pid = ft_atoi(argv[1]);
		i = 0;
		while (argv[2][i])
		{
			send_char(pid, argv[2][i]);
			i++;
		}
		send_char(pid, '\0');
	}
	return (0);
}
