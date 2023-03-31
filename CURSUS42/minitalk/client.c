/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/31 21:02:30 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/libft.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void	send_signal(int pid, int sig)
{
	if (sig == 1)
	{
		printf("called: 1\n");
		kill(pid, SIGUSR2);
	}
	else
	{
		printf("called: 0\n");
		kill(pid, SIGUSR1);
	}
}

void	char_to_bin(int pid, char c)
{
	int	n;
	int	b;

	n = c;
	printf("c: %c is n: %d\n", c, n);
	while (n != 0)
	{
		b = n % 2;
		printf("b: %i\n", b);
		send_signal(pid, b);
		n = n / 2;
		usleep(1);
	}
	return (0);
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
		char_to_bin(pid, c);
		i++;
	}
	return (0);
}
